#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

/*
 * Este programa implementa uma estrutura de dados de pilha (stack)
 * usando uma lista encadeada. A pilha segue a l�gica LIFO (Last-In, First-Out),
 * onde o �ltimo elemento a ser inserido � o primeiro a ser removido.
 * As opera��es de Push (empilhar), Pop (desempilhar), Topo (consultar)
 * e Print (listar) s�o demonstradas.
 */

// --- Estruturas de Dados ---
typedef struct sNo{
    int N;
    struct sNo *prox;
}NO;

// --- Prot�tipos de Fun��es ---
void Inic(NO** Pilha);
int Empty(NO *Pilha);
void Push(NO** Pilha, int Num);
void Pop(NO **Pilha);
void Print(NO *Pilha);
int Topo(NO *Pilha);

//

/*Iniciar a pilha
O ponteiro de ponteiro NO** Pilha
permite que a fun��o modifique o ponteiro P na fun��o main,
fazendo com que ele aponte para NULL, indicando que a pilha est� vazia.*/
void Inic(NO** Pilha){
    *Pilha = NULL;
}

/*
 * Verifica se a pilha est� vazia.
 * Retorna 1 se estiver vazia (ponteiro � NULL), 0 caso contr�rio.
 */
int Empty(NO *Pilha){
    return (Pilha == NULL);
}

/*
 * Insere um novo registro no topo da pilha (opera��o Push).
 * A nova entrada se torna o novo topo, apontando para o antigo topo.
 */
void Push(NO** Pilha, int Num){
    // 1. Aloca mem�ria para o novo n�
    NO *novo = (NO *) malloc(sizeof(NO));
    if(novo == NULL){
        printf("<ERRO> N�o foi poss�vel alocar mem�ria para o novo N�!");
        return;
    }
    // 2. Preenche os dados do novo n� e o coloca no topo
    novo->N = Num;
    novo->prox = *Pilha; /*O ponteiro prox do novo n� aponta para
    o antigo topo da pilha.*/
    *Pilha = novo; /*O ponteiro da pilha � atualizado para apontar
    para o novo n�, que agora � o novo topo.*/
}

/*
 * Apaga o elemento do topo da pilha (opera��o Pop).
 * O ponteiro do topo � movido para o pr�ximo elemento e a mem�ria do
 * n� removido � liberada para evitar vazamentos de mem�ria.
 */
void Pop(NO **Pilha){

    // N�o faz nada se a pilha estiver vazia
    if(Empty(*Pilha))
        return;
    // 1. Salva o ponteiro para o n� a ser removido
    NO *Tmp = *Pilha;
    // 2. Move o ponteiro do topo para o pr�ximo n� da lista
    *Pilha = (*Pilha)->prox;
    // 3. Libera a mem�ria do n� antigo
    free(Tmp);
}

/*
 * Lista todos os elementos da pilha recursivamente, do topo para a base.
 */
void Print(NO *Pilha){
    // Condi��o de parada da recurs�o: se a pilha estiver vazia
    if(Empty(Pilha))
        return;
     // Imprime o valor do n� atual
    printf("%d\n", Pilha->N);
    // Chama a fun��o recursivamente para o pr�ximo n�
    Print(Pilha->prox);
}

/*
 * Devolve o valor do elemento no topo da pilha.
 * Retorna -1 se a pilha estiver vazia.
 */
int Topo(NO *Pilha){
    if(Empty(Pilha))
        return -1;
    return Pilha->N;
}

// --- Fun��o Principal ---
int main() {
    setlocale(LC_ALL, "Portuguese");
    NO* P;
    Inic(&P);

    printf("Pilha esta vazia? %s\n", Empty(P) ? "Sim" : "Nao");

    puts("\n--- Operacoes Push ---");
    puts("Empilhando 10...");
    Push(&P, 10);
    Print(P);

    puts("Empilhando 20...");
    Push(&P, 20);
    Print(P);

    puts("Empilhando 30...");
    Push(&P, 30);
    Print(P);

    printf("\nO valor no topo da pilha �: %d\n", Topo(P));

    printf("Pilha esta vazia? %s\n", Empty(P) ? "Sim" : "Nao");

    puts("\n--- Operacoes Pop ---");
    puts("Desempilhando o topo...");
    Pop(&P);
    Print(P);

    puts("Desempilhando o topo...");
    Pop(&P);
    Print(P);

    puts("Desempilhando o topo...");
    Pop(&P);
    Print(P);

    printf("\nO valor no topo da pilha �: %d\n", Topo(P));

    printf("Pilha esta vazia? %s\n", Empty(P) ? "Sim" : "Nao");

    return 0;
}
