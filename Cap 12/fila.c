#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

/*
 * Este programa implementa uma estrutura de dados de fila (queue)
 * usando uma lista encadeada. A fila segue a l�gica FIFO (First-In, First-Out),
 * onde o primeiro elemento a ser inserido � o primeiro a ser removido.
 * As opera��es de Inserir, Apagar e Listar s�o demonstradas.
 */

// --- Estruturas de Dados ---
typedef struct sPessoa{
    int Idade;
    char Nome[20+1];
    struct sPessoa *Prox; /*Ponteiro para o pr�ximo n�*/
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
 * A fun��o aloca mem�ria para um novo n� e o adiciona ao final da lista encadeada.
 */
void Inserir(FILA *Fila, int Idade, char *Nome){
    // 1. Aloca mem�ria para o novo n�
    PESSOA *novo = (PESSOA *)malloc(sizeof(PESSOA));
    if (novo == NULL) {
        printf("Erro: Nao foi possivel alocar memoria para o novo no.\n");
        return;
    }
    // 2. Preenche os dados do novo n�
    novo->Idade = Idade;
    strcpy(novo->Nome, Nome);
    novo->Prox = NULL;

    // 3. Adiciona o n� � fila
    if (*Fila == NULL) {
        // Se a fila estiver vazia, o novo n� se torna o primeiro
        *Fila = novo;
    } else {
        // Se a fila j� tiver elementos, encontra o �ltimo n�
        PESSOA *atual = *Fila;
        while (atual->Prox != NULL) {
            atual = atual->Prox;
        }
        // O �ltimo n� agora aponta para o novo n�, que est� no fim
        atual->Prox = novo;
    }
}

/*
 * Apaga o primeiro elemento da fila (se existir), seguindo a l�gica FIFO.
 * Libera a mem�ria do n� removido para evitar vazamentos de mem�ria.
 */
void Apagar(FILA *Fila){
    // N�o faz nada se a fila estiver vazia
    if(*Fila == NULL)
        return;

    // 1. Salva o ponteiro para o primeiro n� a ser apagado
    PESSOA *tmp = *Fila;

    // 2. Move o ponteiro da fila para o pr�ximo n�
    *Fila = (*Fila)->Prox;
    // 3. Libera a mem�ria do n� antigo
    free(tmp);
}

/*
 * Lista todos os elementos da fila recursivamente.
 * A fun��o percorre a lista imprimindo o conte�do de cada n�.
 */
void Listar(FILA Fila){
    // Condi��o de parada: se a fila estiver vazia ou for o fim da lista
    if(Fila == NULL)
        return;
    // Imprime os dados do n� atual
    printf("%d %s\n", Fila->Idade, Fila->Nome);
    // Chama a fun��o recursivamente para o pr�ximo n�
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

    puts("\n--- Listando ap�s apagar o primeiro (2 elementos) ---");
    Listar(F);

    Apagar(&F);

    puts("\n--- Listando ap�s apagar o segundo (1 elemento) ---");
    Listar(F);

    Apagar(&F);

    puts("\n--- Listando ap�s apagar o terceiro (0 elementos) ---");
    Listar(F);

    Apagar(&F); // Tenta apagar novamente (fila vazia)

    puts("\n--- Tentando apagar de uma fila vazia (0 elementos) ---");
    Listar(F);

    return 0;
}
