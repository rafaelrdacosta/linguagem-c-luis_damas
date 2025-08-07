#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

/*
 * Este programa implementa uma estrutura de dados de pilha (stack)
 * usando uma lista encadeada. A pilha segue a lógica LIFO (Last-In, First-Out),
 * onde o último elemento a ser inserido é o primeiro a ser removido.
 * As operações de Push (empilhar), Pop (desempilhar), Topo (consultar)
 * e Print (listar) são demonstradas.
 */

// --- Estruturas de Dados ---
typedef struct sNo{
    int N;
    struct sNo *prox;
}NO;

// --- Protótipos de Funções ---
void Inic(NO** Pilha);
int Empty(NO *Pilha);
void Push(NO** Pilha, int Num);
void Pop(NO **Pilha);
void Print(NO *Pilha);
int Topo(NO *Pilha);

//

/*Iniciar a pilha
O ponteiro de ponteiro NO** Pilha
permite que a função modifique o ponteiro P na função main,
fazendo com que ele aponte para NULL, indicando que a pilha está vazia.*/
void Inic(NO** Pilha){
    *Pilha = NULL;
}

/*
 * Verifica se a pilha está vazia.
 * Retorna 1 se estiver vazia (ponteiro é NULL), 0 caso contrário.
 */
int Empty(NO *Pilha){
    return (Pilha == NULL);
}

/*
 * Insere um novo registro no topo da pilha (operação Push).
 * A nova entrada se torna o novo topo, apontando para o antigo topo.
 */
void Push(NO** Pilha, int Num){
    // 1. Aloca memória para o novo nó
    NO *novo = (NO *) malloc(sizeof(NO));
    if(novo == NULL){
        printf("<ERRO> Não foi possível alocar memória para o novo Nó!");
        return;
    }
    // 2. Preenche os dados do novo nó e o coloca no topo
    novo->N = Num;
    novo->prox = *Pilha; /*O ponteiro prox do novo nó aponta para
    o antigo topo da pilha.*/
    *Pilha = novo; /*O ponteiro da pilha é atualizado para apontar
    para o novo nó, que agora é o novo topo.*/
}

/*
 * Apaga o elemento do topo da pilha (operação Pop).
 * O ponteiro do topo é movido para o próximo elemento e a memória do
 * nó removido é liberada para evitar vazamentos de memória.
 */
void Pop(NO **Pilha){

    // Não faz nada se a pilha estiver vazia
    if(Empty(*Pilha))
        return;
    // 1. Salva o ponteiro para o nó a ser removido
    NO *Tmp = *Pilha;
    // 2. Move o ponteiro do topo para o próximo nó da lista
    *Pilha = (*Pilha)->prox;
    // 3. Libera a memória do nó antigo
    free(Tmp);
}

/*
 * Lista todos os elementos da pilha recursivamente, do topo para a base.
 */
void Print(NO *Pilha){
    // Condição de parada da recursão: se a pilha estiver vazia
    if(Empty(Pilha))
        return;
     // Imprime o valor do nó atual
    printf("%d\n", Pilha->N);
    // Chama a função recursivamente para o próximo nó
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

// --- Função Principal ---
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

    printf("\nO valor no topo da pilha é: %d\n", Topo(P));

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

    printf("\nO valor no topo da pilha é: %d\n", Topo(P));

    printf("Pilha esta vazia? %s\n", Empty(P) ? "Sim" : "Nao");

    return 0;
}
