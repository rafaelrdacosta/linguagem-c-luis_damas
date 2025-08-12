#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

/*
 * Este programa implementa uma estrutura de dados de fila (queue)
 * usando uma lista encadeada. A fila segue a lógica FIFO (First-In, First-Out),
 * onde o primeiro elemento a ser inserido é o primeiro a ser removido.
 * As operações de Inserir, Apagar e Listar são demonstradas.
 */

// --- Estruturas de Dados ---
typedef struct sPessoa{
    int Idade;
    char Nome[20+1];
    struct sPessoa *Prox; /*Ponteiro para o próximo nó*/
}PESSOA;

typedef PESSOA* FILA; /*Cria um apelido para um ponteiro do tipo PESSOA

*/

/*
 * Inicia a fila, definindo seu ponteiro inicial como NULL.
 */
void Inic(FILA *Fila){
    *Fila = NULL;
}

/*
 * Insere um novo registro no fim da fila.
 * A função aloca memória para um novo nó e o adiciona ao final da lista encadeada.
 */
void Inserir(FILA *Fila, int Idade, char *Nome){
    // 1. Aloca memória para o novo nó
    PESSOA *novo = (PESSOA *)malloc(sizeof(PESSOA));
    if (novo == NULL) {
        printf("Erro: Nao foi possivel alocar memoria para o novo no.\n");
        return;
    }
    // 2. Preenche os dados do novo nó
    novo->Idade = Idade;
    strcpy(novo->Nome, Nome);
    novo->Prox = NULL;

    // 3. Adiciona o nó à fila
    if (*Fila == NULL) {
        // Se a fila estiver vazia, o novo nó se torna o primeiro
        *Fila = novo;
    } else {
        // Se a fila já tiver elementos, encontra o último nó
        PESSOA *atual = *Fila;
        while (atual->Prox != NULL) {
            atual = atual->Prox;
        }
        // O último nó agora aponta para o novo nó, que está no fim
        atual->Prox = novo;
    }
}

/*
 * Apaga o primeiro elemento da fila (se existir), seguindo a lógica FIFO.
 * Libera a memória do nó removido para evitar vazamentos de memória.
 */
void Apagar(FILA *Fila){
    // Não faz nada se a fila estiver vazia
    if(*Fila == NULL)
        return;

    // 1. Salva o ponteiro para o primeiro nó a ser apagado
    PESSOA *tmp = *Fila;

    // 2. Move o ponteiro da fila para o próximo nó
    *Fila = (*Fila)->Prox;
    // 3. Libera a memória do nó antigo
    free(tmp);
}

/*
 * Lista todos os elementos da fila recursivamente.
 * A função percorre a lista imprimindo o conteúdo de cada nó.
 */
void Listar(FILA Fila){
    // Condição de parada: se a fila estiver vazia ou for o fim da lista
    if(Fila == NULL)
        return;
    // Imprime os dados do nó atual
    printf("%d %s\n", Fila->Idade, Fila->Nome);
    // Chama a função recursivamente para o próximo nó
    Listar(Fila->Prox); /*Listar os outros*/
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    FILA F;
    Inic(&F);

    puts("--- Estado Inicial ---");
    Listar(F);

    puts("\n--- Inserindo 3 elementos ---");
    Inserir(&F, 10, "Thiago");
    Inserir(&F, 20, "Luisa");
    Inserir(&F, 30, "Ana");

    puts("\n--- Listando a fila completa (3 elementos) ---");
    Listar(F);

    Apagar(&F);

    puts("\n--- Listando após apagar o primeiro (2 elementos) ---");
    Listar(F);

    Apagar(&F);

    puts("\n--- Listando após apagar o segundo (1 elemento) ---");
    Listar(F);

    Apagar(&F);

    puts("\n--- Listando após apagar o terceiro (0 elementos) ---");
    Listar(F);

    Apagar(&F); // Tenta apagar novamente (fila vazia)

    puts("\n--- Tentando apagar de uma fila vazia (0 elementos) ---");
    Listar(F);

    return 0;
}
