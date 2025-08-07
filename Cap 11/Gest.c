#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

/* Implementa��o de um sistema de gerenciamento de registros em arquivo bin�rio.
 * O programa oferece um menu principal para realizar opera��es de
 * Inserir, Alterar, Apagar, Listar e Pesquisar registros de pessoas.
 * Os dados (Nome, Idade, Sal�rio) s�o armazenados em um arquivo bin�rio.
 */


#define ARQ "Dados.DAT" /*Arquivo com os dados*/

#define OP_INSERIR '1'
#define OP_ALTERAR '2'
#define OP_APAGAR '3'
#define OP_LISTAR '4'
#define OP_PESQUISAR '5'

#define OP_SAIR '0'

#define OP_PESQ_IDADE '1'
#define OP_PESQ_NOME '2'

char *MainMenu[] = {
    "1. Inserir Registro",
    "2. Alterar Registro",
    "3. Apagar Registro",
    "4. Listar Registros",
    "5. Pesquisas",
    "0. Sair",
    NULL /*para indicar o fim do vetor, pois � um vetor de ponteiros para caracteres*/

};

char *PesqMenu[]={
    "1. Pesquisar por Intervalo de Idades",
    "2. Pesquisar por Nome",
    "0. Voltar",
    NULL /*para indicar o fim do vetor, pois � um vetor de ponteiros para caracteres*/

};

FILE *fp; /*Vari�vel global pois � �til ao longo do programa*/

typedef struct{
    char Nome[30 + 1];
    int Idade;
    float Salario;
    char Status; /* ser� utilizado '*' para indicar que o registro est� apagado*/
}PESSOA;

void Mensagem(char *msg);

/* Limpa o buffer de entrada do teclado */
void LimpaBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

/*L� os dados de um registro introduzido pelo usu�rio*/
void Ler_Pessoa(PESSOA *p){
    printf("Nome: "); fgets(p->Nome, sizeof(p->Nome), stdin);
    p->Nome[strcspn(p->Nome, "\n")] = 0; //remove o '\n' lido por fgets

    printf("Idade: "); scanf("%d", &p->Idade);
    printf("Sal�rio: "); scanf("%f", &p->Salario);
    //Limpa o buffer de entrada
    LimpaBuffer();

    p->Status = ' '; //define o registro como ativo
}

/*Mostra na tela, os dados existentes no registro*/
void Mostrar_Pessoa(PESSOA p){
    printf("%-30s %3d  %10.2f\n", p.Nome, p.Idade, p.Salario);
}

/*Adiciona uma Pessoa no Arquivo*/
void Adicionar_Pessoa(PESSOA p){
    fseek(fp, 0L, SEEK_END);
    if(fwrite(&p, sizeof(p), 1, fp) != 1)
        Mensagem("Adicionar Pessoa: Falhou a escrita do Registro.\n");
    fflush(fp); //garante que os dados sejam escritos no disco
}

/*Coloca uma mensagem na tela*/
void Mensagem(char *msg){
    printf(msg);
    LimpaBuffer(); // Usado para pausar e esperar por Enter
}

/*Verificar se o arquivo j� existe.
Se n�o existir, ele � criado.
Se j� existir, abre-o em Modo de Leitura e Escrita bin�ria(r+ b)*/

void Inic(){
    fp = fopen(ARQ, "r+b"); /*tentar abrir para leitura e escrita*/
    if(fp == NULL){
        //Se o arquivo n�o existe, tenta cri�-lo
        fp = fopen(ARQ, "w+b");
        if(fp == NULL){
            fprintf(stderr, "ERRO FATAL: Imposs�vel criar arquivo de dados\n");
            exit(1);
        }
    }
}

/*Faz um Menu Simples com as op��es do vetor de strings.
Seleciona a Op��o, usando o primeiro caractere da string.
Devolve o primeiro caractere da op��o*/

char Menu(char *Opcoes[]){
    int i;
    char ch;

    while(1){
        system("cls"); /*Limpa a tela. Use clear para Linux/macOS*/
        printf("\n\n");
        for(i = 0; Opcoes[i] != NULL; i++)
            printf("\t\t%s\n\n", Opcoes[i]);

        printf("\n\n\tOp��o: ");
        ch = getchar();
        LimpaBuffer();

        for(i = 0; Opcoes[i] != NULL; i++)
            if(Opcoes[i][0] ==  ch)
                return ch;
    }
}

void Inserir_Pessoa(){
    PESSOA x;
    Ler_Pessoa(&x);
    Adicionar_Pessoa(x);
}

void Alterar_Pessoa(){
    PESSOA x;
    long int n_reg;
    printf("Qual o n�mero do Registro: ");
    scanf("%ld", &n_reg); fflush(stdin);

    if(fseek(fp, (n_reg-1)*sizeof(PESSOA), SEEK_SET) != 0){
        Mensagem("Registro Inexistente ou Problemas no posicionamento!!\n");
        return;
    }

    if(fread(&x, sizeof(PESSOA), 1, fp) != 1){
        Mensagem("Problemas na Leitura do Registro!!\n");
        return;
    }
    if(x.Status == '*'){
        Mensagem("Um registro apagado n�o pode ser alterado!!\n\n");
        return;
    }

    printf("\n\nDados Atuais\n\n");
    Mostrar_Pessoa(x);

    printf("\n\nNovos Dados\n\n");
    Ler_Pessoa(&x);

    /*Recuar um registro no arquivo*/
    fseek(fp, -(long)sizeof(PESSOA), SEEK_CUR);

    /*Reecrever o registro*/
    fwrite(&x, sizeof(PESSOA), 1, fp);
    fflush(fp); /*Despejar os dados no disco r�gido*/
}

void Apagar_Pessoa(){
    PESSOA x;
    long int n_reg;
    char resp;

    printf("Qual o n�mero do registro: ");
    scanf("%ld", &n_reg);
    LimpaBuffer();

    if (fseek(fp, (n_reg-1)*sizeof(PESSOA), SEEK_SET) != 0){
        Mensagem("Registro inexistente ou problemas no posicionamento!!\n");
        return;
    }

    if(fread(&x, sizeof(PESSOA), 1, fp) != 1){
        Mensagem("Problemas na leitura do registro!\n");
        return;
    }

    if(x.Status == '*'){
        Mensagem("Registro j� est� apagado!\n");
        return;
    }

    printf("\n\nDados Atuais\n\n");
    Mostrar_Pessoa(x);
    printf("\n\nApagar o Registro (s/n)???: ");
    resp = getchar();
    LimpaBuffer();

    if(toupper(resp) != 'S')
        return;

    x.Status = '*'; // muda o status para 'apagado', padroniza��o do programa

    /*Recuar um registro no arquivo*/
    fseek(fp, -(long)sizeof(PESSOA), SEEK_CUR);

    /*Reescrever o registro*/
    fwrite(&x, sizeof(PESSOA), 1, fp);
    fflush(fp); /*despejar os dados no disco r�gido*/
}

void Listar(){
    long int N_Linhas = 0;
    PESSOA reg;
    rewind(fp);

    printf("\n\nLISTANDO TODOS OS REGISTROS\n\n");

    while(1){
        if(fread(&reg, sizeof(PESSOA), 1, fp) != 1)
            break; /*sair do la�o*/
        if(reg.Status == '*')
            continue; /*passa para o pr�ximo porque est� vazio*/
        Mostrar_Pessoa(reg);
        N_Linhas++;
        if(N_Linhas % 20 == 0)
            Mensagem("PRESSIONE <ENTER> para continuar...");
    }
   Mensagem("FIM DA LISTAGEM. PRESSIONE <ENTER> para continuar...");
}


void Pesquisar_Idades(int ini, int fim){
    PESSOA reg;
    rewind(fp);
    int encontrado = 0;

    printf("\n\nPESQUISANDO REGISTROS POR IDADE\n\n");

    while(fread(&reg, sizeof(PESSOA), 1, fp)){
        if(reg.Status != '*' && reg.Idade >= ini && reg.Idade<=fim)
            Mostrar_Pessoa(reg);
            encontrado = 1;
    }

    if (!encontrado) {
        printf("Nenhum registro encontrado no intervalo de idade.\n");
    }
    Mensagem("PRESSIONE <ENTER> para continuar...");
}

// Fun��o para converter uma string para min�sculas
void to_lower_string(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

void Pesquisar_Nome(char *s) {
    PESSOA reg;
    rewind(fp);
    printf("\n\nPESQUISANDO REGISTROS POR NOME\n\n");
    int encontrado = 0;

    // Converte a string de pesquisa para min�sculas uma �nica vez
    char s_lower[30 + 1];
    strcpy(s_lower, s);
    to_lower_string(s_lower);

    // Itera sobre todos os registros no arquivo
    while (fread(&reg, sizeof(PESSOA), 1, fp) == 1) {
        // Verifica se o registro n�o est� apagado
        if (reg.Status != '*') {
            // Cria uma c�pia do nome do registro para n�o modificar o original
            char nome_lower[30 + 1];
            strcpy(nome_lower, reg.Nome);
            to_lower_string(nome_lower);

            // Realiza a compara��o insens�vel a mai�sculas/min�sculas
            if (strstr(nome_lower, s_lower)) {
                Mostrar_Pessoa(reg);
                encontrado = 1;
            }
        }
    }

    if (!encontrado) {
        printf("Nenhum registro encontrado com o nome fornecido.\n");
    }

    Mensagem("PRESSIONE <ENTER> para continuar...");
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    char Opcao;
    Inic(); /*Abrir o arquivo para leitura e escrita*/

    while((Opcao = Menu(MainMenu)) != OP_SAIR){
        switch(Opcao){
            case OP_INSERIR: Inserir_Pessoa(); break;
            case OP_ALTERAR: Alterar_Pessoa(); break;
            case OP_APAGAR: Apagar_Pessoa(); break;
            case OP_LISTAR: Listar(); break;
            case OP_PESQUISAR:
                //Loop para o submenu de pesquisa
                while((Opcao = Menu(PesqMenu)) != OP_SAIR){
                    switch(Opcao){
                        case OP_PESQ_IDADE:{
                            int n1, n2;
                            printf("Qual o intervalo de Idades (min max): ");
                            scanf("%d %d", &n1, &n2);
                            //Limpa o buffer
                            int c;
                            while((c = getchar()) != '\n' && c != EOF);

                            Pesquisar_Idades(n1, n2);
                            break;
                        }
                        case OP_PESQ_NOME:{
                            char string[30 + 1];
                            printf("Qual nome a procurar: ");

                            fgets(string, sizeof(string), stdin);
/*A fun��o fgest vai ler a linha do teclado at� o \n ou o limite da string
, por�m ele inclui o \n na string*/
                            string[strcspn(string, "\n")] = 0;
/*A fun��o ir� percorrer a string, e vai contar cada caractere at� chegar
em \n. Com isso ele vai contar todos os caracteres da string, e vai retornar
o �ndice do \n. Desta forma string[0] = 0 ou seja string[0] = o caractere
nulo '\0' que marca o final de uma string*/

                            // Verifica se a string n�o est� vazia antes de pesquisar
                            if (strlen(string) > 0) {
                                Pesquisar_Nome(string);
                            } else {
                                printf("A busca foi cancelada ou a entrada esta vazia.\n");
                                Mensagem("PRESSIONE <ENTER> para continuar...");
                            }
                            break;
                        }
                    }
                }
            break;
        }
    }
    fclose(fp); //fechar o arquivo para sair
    return 0;
}
