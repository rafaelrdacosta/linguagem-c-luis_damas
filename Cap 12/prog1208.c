#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

/*Suponha um novo tipo em C denominado REG capaz de suportar os seguinte dados:
Nome(30 caracteres), Altura e Idade.

Suponha, igualmente, um arquivo denominado DADOS.DAT com um conjunto de registros
do tipo REG gravados sequencial e individualmente através da instrução
fwrite(&r, sizeof(REG), 1, fp);

Suponha também que o arquivo já foi aberto corretamente e que está disponível
através da variável global fp.

1) Defina o tipo REG que suporte a definição acima apresentada.
2) Implementa a função void Listar(void) que mostra o nome de todos os indivíduos
existentes no arquivo.
3) Implemente a função int N_Maiores(int n) que devolve o número de indivíduos
existentes no arquivo com idade superior a n anos.
4) Implemente a função long N_Registros() que devolve o número total de registros
existentes sem ter que contá-los um a um.
5) Implemente a função __Carrega_Estrutura(__*ptr) completando os tipos de dados
assinalados por __. Essa função cria dinamicamente um estrutura capaz de suportar
todos os registros existentes no arquvivo, independente do seu número(desde que
a memória do computador permita). Em seguida, copia todos os registros do arquivo
para essa estrutura. Devolve o endereço de memória onde a estrutura foi criada.
*/

// --- Tipo de Dados ---
typedef struct{
    char Nome[30+1]; // +1 para o caractere nulo de terminação '\0'
    float Altura;
    int Idade;
}REG;

/*Variável global para Arquivo*/
FILE *fp;

// --- Protótipos de Funções ---
void Inic();
void Listar();
int N_Maiores(int n);
long N_Registros();
REG *Carrega_Estrutura(); // Simplificamos o protótipo

// --- Implementação das Funções ---


/*
 * Cria um arquivo de teste e popula-o com 10 registros.
 * Este arquivo será usado pelas outras funções.
 */
void Inic(){
    char *v[] = {"UM", "DOIS", "TRES", "QUATRO", "CINCO", "SEIS",
     "SETE", "OITO", "NOVE", "DEZ"};

     int i;
     REG r;
     FILE *fp_local = fopen("DADOS.DAT", "wb");
     if (fp_local == NULL) {
        printf("Erro: Nao foi possivel criar o arquivo DADOS.DAT!\n");
        return;
    }
     for(i=0; i<10; i++){
        strcpy(r.Nome, v[i]);
        r.Idade = i*10;
        r.Altura = 1+i*.1;
        fwrite(&r, sizeof(r), 1, fp_local);
     }
     fclose(fp_local);
}

/*
 * Lista o nome, idade e altura de todos os registros no arquivo.
 * A função navega para o início do arquivo e restaura a posição original
 * do cursor após a leitura.
 */
void Listar(){
    REG r;

    /*Salvaguardar a posição atual*/
    long Old_Pos = ftell(fp);

    /*Ir para o início do arquivo*/
    rewind(fp);

     printf("--- Conteudo do arquivo DADOS.DAT ---\n");
    while(fread(&r, sizeof(r), 1, fp) == 1)
        printf("Nome: %-30s | Idade: %3d | Altura: %7.2f\n", r.Nome, r.Idade, r.Altura);
     printf("------------------------------------\n");

    /*Reposicionar o arquivo*/
    fseek(fp, Old_Pos, SEEK_SET);
}

/*
 * Conta o número de indivíduos com idade superior a um valor 'n'.
 * param n A idade de referência.
 * return O número de registros que satisfazem a condição.
 */
int N_Maiores(int n){
    REG r;
    int contador = 0;

    /*Salvaguardar a posição atual*/
    long Old_Pos = ftell(fp);

    /*Ir para o início do arquivo*/
    rewind(fp);

    while(fread(&r, sizeof(r), 1, fp) == 1)
        if(r.Idade > n)
            contador++;

    /*Reposicionar o arquivo*/
    fseek(fp, Old_Pos, SEEK_SET);

    return contador;
}

/*
 * Devolve o número total de registros existentes no arquivo.
 * A função faz isso movendo o cursor para o final do arquivo e
 * dividindo o tamanho total pelo tamanho de um registro.
 * return O número total de registros.
 */
long N_Registros(){
    /*Salvaguardar a posição atual*/
    long Old_Pos = ftell(fp);

    fseek(fp, 0L, SEEK_END); // Move o cursor para o final
    long tamanho_arquivo = ftell(fp);

    /*Reposicionar o arquivo*/
    fseek(fp, Old_Pos, SEEK_SET);

    return tamanho_arquivo / sizeof(REG);
}

/*
 * Carrega todos os registros do arquivo para uma estrutura alocada dinamicamente.
 * return Um ponteiro para o array de estruturas alocadas ou NULL em caso de erro.
 */
REG *Carrega_Estrutura(){
    long Old_Pos = ftell(fp);
    long num_registros = N_Registros();

     // Aloca memória para todos os registros
    REG *ptr = (REG *) calloc(num_registros, sizeof(REG));
    if (ptr == NULL) {
        fprintf(stderr, "Erro: Falha na alocacao de memoria para os registros!\n");
        return NULL;
    }

    rewind(fp);
    // Leitura do arquivo para a memória alocada
    fread(ptr, sizeof(REG), num_registros, fp);

    /*Reposicionar o arquivo*/
    fseek(fp, Old_Pos, SEEK_SET);

    return ptr;
}


// --- Função Principal ---
int main() {
    setlocale(LC_ALL, "Portuguese");

    // Prepara o arquivo de teste.
    Inic();

    // Abre o arquivo de dados em modo de leitura binária
    fp = fopen("DADOS.DAT", "rb");
    if (fp == NULL) {
        printf("Impossivel abrir o arquivo de dados.\n");
        exit(1);
    }

    printf("\n--- Teste das funcoes ---\n\n");

    Listar();

    printf("\nNumero de individuos com mais de 18 anos = %d\n", N_Maiores(18));
    printf("Numero de individuos com mais de 65 anos = %d\n", N_Maiores(65));

    long total_registros = N_Registros();
    printf("Numero total de registros = %ld\n", total_registros);

    // Carrega a estrutura e verifica se a alocação foi bem-sucedida
    REG *registros_em_memoria = Carrega_Estrutura();
    if (registros_em_memoria != NULL) {
        printf("\n--- Conteudo carregado para a memoria (array de structs) ---\n");
        for (long n = 0; n < total_registros; n++) {
            printf("Registro %ld: Nome: %-30s | Idade: %3d | Altura: %.2f\n",
                   n + 1, registros_em_memoria[n].Nome, registros_em_memoria[n].Idade,
                   registros_em_memoria[n].Altura);
        }

        // Libera a memória alocada
        free(registros_em_memoria);
    } else {
        printf("Erro: Nao foi possivel carregar os dados para a memoria.\n");
    }

    fclose(fp);
    return 0;
}
