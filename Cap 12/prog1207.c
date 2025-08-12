#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

/**
 * Este programa implementa uma lista encadeada que organiza os n�meros
 * de forma especial: todos os n�meros �mpares s�o inseridos no in�cio da lista,
 * e todos os n�meros pares s�o inseridos no final.
 * Ele demonstra as opera��es de iniciar, inserir, remover e listar elementos,
 * com uma l�gica de inser��o adaptada para a regra de paridade.
 */

// --- Estruturas de Dados ---
typedef struct sNo{
    unsigned int N;
    struct sNo *Prox;
}LISTA;

// --- Prot�tipos das Fun��es ---
void Inic(LISTA** Lista);
void Inserir(LISTA** Lista, unsigned int Num);
unsigned int Retirar(LISTA** Lista, unsigned int Num);
void Print(LISTA *Lista);

// --- Implementa��o das Fun��es ---


/*
 * Inicia a lista, definindo seu ponteiro inicial para NULL.
 */
void Inic(LISTA** Lista){
    *Lista = NULL;
}

/*
 * Insere um novo registro na lista de forma ordenada por paridade.
 * Numeros �mpares s�o inseridos no in�cio da lista.
 * N�meros pares s�o inseridos no final da lista.
 */
void Inserir(LISTA** Lista, unsigned int Num){
    // 1. Aloca mem�ria para o novo n�
    LISTA *Novo = (LISTA *) malloc(sizeof(LISTA));
    if(Novo == NULL){
        fprintf(stderr, "Erro: N�o foi poss�vel alocar mem�ria para o novo N�!\n");
        return;
    }
    Novo->N = Num;
    Novo->Prox = NULL;
    // 2. L�gica de inser��o baseada na paridade
    if(Num % 2 == 1){ //se �mpara insere no in�cio
        Novo->Prox = *Lista;
        *Lista = Novo;
    }else{ // Se o n�mero for par, insere no final
        if(*Lista == NULL){
            *Lista = Novo;
        }else{
            LISTA *atual = *Lista;
            while(atual->Prox != NULL){
                atual = atual->Prox;
            }
            atual->Prox = Novo;
        }
    }
}

/*
 * Retira o primeiro elemento da lista com um valor espec�fico.
 * Retorna o valor do elemento retirado, ou 0 se n�o for encontrado.
 */
unsigned int Retirar(LISTA** Lista, unsigned Num){
    if (*Lista == NULL) {
        return 0;
    }

    LISTA *atual = *Lista;
    LISTA *anterior = NULL;

    while(atual != NULL && atual->N != Num){
        anterior = atual;
        atual = atual->Prox;
    }
    if (atual == NULL) {
        return 0; // O n�mero n�o foi encontrado
    }
    unsigned int valor_retirado = atual->N; //Encontrou o n�mero a ser removido

    if (anterior == NULL) { /*O n� � o primeiro da fila*/
        *Lista = atual->Prox;
    } else {/*Se n�o for o primeiro, a fun��o vai at� n� anterior
(anterior->Prox) e muda o seu n� de "pr�ximo" para que ele aponte
para o n� que vem depois do que est� sendo removido (atual->Prox).
O n� a ser removido agora est� "desconectado" da fila.*/
        anterior->Prox = atual->Prox;
    }

    free(atual);
    return valor_retirado;
}

/*
 * Lista todos os elementos da lista recursivamente.
 */
void Print(LISTA *Lista) {
    if (Lista == NULL) {
        return;
    }
    printf("%d\n", Lista->N);
    Print(Lista->Prox);
}

// --- Fun��o Principal ---
int main() {
    setlocale(LC_ALL, "Portuguese");
    LISTA *P;
    Inic(&P);

    puts("--- Lista inicialmente vazia ---");
    Print(P);

    puts("\n--- Inserindo numeros de 10 a 15 ---");
    for (int i = 10; i <= 15; i++) {
        Inserir(&P, i);
    }
    printf("Lista apos insercao (impares no inicio):\n");
    Print(P);

    puts("\n--- Inserindo o numero 13 novamente ---");
    Inserir(&P, 13);
    printf("Lista apos insercao (13 � impar, vai para o inicio):\n");
    Print(P);

    puts("\n--- Retirando o valor 15 (do final da lista) ---");
    Retirar(&P, 15);
    printf("Lista apos remocao de 15:\n");
    Print(P);

    puts("\n--- Retirando o valor 11 (do inicio da lista) ---");
    Retirar(&P, 11);
    printf("Lista apos remocao de 11:\n");
    Print(P);

    puts("\n--- Retirando o valor 12 (do meio da lista) ---");
    Retirar(&P, 12);
    printf("Lista apos remocao de 12:\n");
    Print(P);

    puts("\n--- Tentando retirar um valor inexistente (99) ---");
    Retirar(&P, 99);
    printf("Lista apos tentativa de remocao de 99:\n");
    Print(P);

    return 0;
}
