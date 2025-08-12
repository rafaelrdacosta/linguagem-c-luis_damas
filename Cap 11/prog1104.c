#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

#define MAX 10 //define o tamanho máximo da lista
#define NOME_ARQUIVO "registros.dat" // Nome do arquivo de dados

/*
 * Este programa gerencia uma lista de registros na memória, permitindo
 * inserir novos registros e salvar/carregar a lista de/para um arquivo binário.
 * A lista é implementada como um array estático de tamanho MAX.
 */

 /*Estrutura de dados*/
typedef struct{
    unsigned int N;
    char Nome[40 + 1];
}REGISTRO;

typedef struct{
    REGISTRO v[MAX];
    int Conta;
}LISTA;

/*Inicializa a lista, definindo a contagem de registros para 0.*/
void Inic(LISTA *ptr){
    ptr->Conta = 0;
}

/*Verifica se a lista está cheia.
Retorna 1 (verdadeiro) se estiver, 0 (falso) caso contrário.
 */
int Cheia(LISTA L){
    return L.Conta == MAX;
}

/* Insere um novo registro na lista.
 Retorna o índice do registro inserido ou -1 se a lista estiver cheia.
 */

int Inserir(LISTA *ptr, REGISTRO r){
    if(Cheia(*ptr))
        return -1;
    ptr->v[ptr->Conta] = r;
    return ptr->Conta++;
}

/*Salva a lista de registros em um arquivo binário.
 Retorna 1 em caso de sucesso, 0 em caso de falha.
 */

int Save(LISTA L, char *Nome_Arq){
    int i;
    FILE *fp = fopen(Nome_Arq, "wb");
    if(fp == NULL){
       fprintf(stderr, "Erro ao abrir o arquivo para escrita.\n");
       return 0; // 0 para falha
    }
    for(i=0; i <L.Conta; i++){
        if(fwrite(&L.v[i], sizeof(REGISTRO), 1, fp) != 1){
            fprintf(stderr, "Erro ao escrever no arquivo.\n");
            fclose(fp);
            return 0; // 0 para falha
        }
    }
    fclose(fp);
    return 1; //1 para sucesso
}

/* Carrega registros de um arquivo binário para a lista.
 Retorna 1 em caso de sucesso, 0 em caso de falha, ou -1 se a lista estiver cheia.
 */

int Load(LISTA *L, FILE *fp){
    REGISTRO R;
    fp = fopen(NOME_ARQUIVO, "rb");
    if (fp == NULL) {
        // Se o arquivo não existe, não é um erro fatal para o carregamento
        return 0;
    }

    Inic(L); // Inicializa a lista antes de carregar

    while (fread(&R, sizeof(R), 1, fp) == 1) {
        if (Inserir(L, R) == -1) {
            fprintf(stderr, "A lista está cheia, nem todos os registros foram carregados.\n");
            fclose(fp);
            return -1; // -1 se a lista cheia
        }
    }

    fclose(fp);
    return 1; // 1 para sucesso
}

/* Imprime todos os registros da lista na tela.
 */

void Listar(LISTA L){
    int i;
    if (L.Conta == 0) {
        printf("A lista esta vazia.\n");
    } else {
        printf("--- Conteúdo da Lista ---\n");
        for (i = 0; i < L.Conta; i++)
            printf("%u. %s\n", L.v[i].N, L.v[i].Nome);
        printf("---------------------------\n");
    }
}

/*
 * Função principal do programa.
 * Demonstra a criação de uma lista, a inserção de registros, o salvamento em arquivo
 * e o carregamento posterior.
 */

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    LISTA Lista;

    // --- Etapa 1: Criar e popular a lista ---
    printf("Criando e populando a lista...\n");
    Inic(&Lista);

    // Inserindo alguns registros de exemplo
    REGISTRO R;

    R.N = 100;
    strcpy(R.Nome, "João");
    Inserir(&Lista, R);

    R.N = 101;
    strcpy(R.Nome, "Maria");
    Inserir(&Lista, R);

    R.N = 102;
    strcpy(R.Nome, "Pedro");
    Inserir(&Lista, R);

    // --- Etapa 2: Salvar a lista em um arquivo ---
     printf("\nSalvando a lista no arquivo %s...\n", NOME_ARQUIVO);
     if(Save(Lista, NOME_ARQUIVO)){
         printf("Lista salva com sucesso!\n");
     }else{
         printf("Falha ao salvar a lista.\n");
     }

    // --- Etapa 3: Limpar a lista e carregar os dados do arquivo ---
    printf("\nLimpando a lista da memoria e carregando do arquivo...\n");
    Inic(&Lista); // Limpa a lista
    Listar(Lista); // Mostra que a lista está vazia

    if (Load(&Lista, NOME_ARQUIVO) == 1) {
        printf("Lista carregada com sucesso!\n");
    } else {
        printf("Falha ao carregar a lista ou arquivo nao encontrado.\n");
    }

    // --- Etapa 4: Listar os registros carregados ---
    printf("\nListando os registros carregados:\n");
    Listar(Lista);

    return 0;
}
