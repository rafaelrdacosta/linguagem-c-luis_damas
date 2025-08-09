#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

/**
 * Este programa demonstra a criação dinâmica de uma nova string.
 * A função Repete cria uma string concatenada com 'n' cópias da string original,
 * separadas por espaços. A memória para a nova string é alocada dinamicamente,
 * e a responsabilidade de liberá-la é da função main.
 */

char *Repete(char *s, int n);

// --- Função Principal ---
int main() {
    setlocale(LC_ALL, "Portuguese");
    char string_original[] = "Rafael";
    char *string_repetida;
    int n = 3;

    // Chama a função para criar a nova string
    string_repetida = Repete(string_original, n);

    // Verifica se a alocação de memória foi bem-sucedida
    if (string_repetida != NULL) {
        printf("String original: \"%s\"\n", string_original);
        printf("Numero de repeticoes: %d\n", n);
        printf("Resultado: \"%s\"\n", string_repetida);

        // Libera a memória alocada dinamicamente
        free(string_repetida);
    } else {
        printf("Erro: Falha na alocacao de memoria.\n");
    }

    return 0;
}


char *Repete(char *s, int n){
    if (s == NULL || n <= 0) {
        return NULL; // Retorna NULL para entradas inválidas
    }

     size_t tamanho_str = strlen(s);
    // Calcula o tamanho total necessário: n cópias de s, n-1 espaços e o terminador nulo '\0'
    size_t tamanho_total = (tamanho_str * n) + (n - 1) + 1;

    char *ptr = (char *)malloc(tamanho_total);
    if (ptr == NULL) {
        return NULL; // Retorna NULL se a alocação de memória falhar
    }

    // Copia a primeira string para o novo buffer
    strcpy(ptr, s);

    // Concatena as cópias restantes com um espaço no início
    for (int i = 1; i < n; i++) {
        strcat(ptr, " ");
        strcat(ptr, s);
    }

    return ptr;
}
