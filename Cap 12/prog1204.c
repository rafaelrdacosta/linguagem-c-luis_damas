#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

/**
 * Este programa demonstra a cria��o din�mica de uma nova string.
 * A fun��o Repete cria uma string concatenada com 'n' c�pias da string original,
 * separadas por espa�os. A mem�ria para a nova string � alocada dinamicamente,
 * e a responsabilidade de liber�-la � da fun��o main.
 */

char *Repete(char *s, int n);

// --- Fun��o Principal ---
int main() {
    setlocale(LC_ALL, "Portuguese");
    char string_original[] = "Rafael";
    char *string_repetida;
    int n = 3;

    // Chama a fun��o para criar a nova string
    string_repetida = Repete(string_original, n);

    // Verifica se a aloca��o de mem�ria foi bem-sucedida
    if (string_repetida != NULL) {
        printf("String original: \"%s\"\n", string_original);
        printf("Numero de repeticoes: %d\n", n);
        printf("Resultado: \"%s\"\n", string_repetida);

        // Libera a mem�ria alocada dinamicamente
        free(string_repetida);
    } else {
        printf("Erro: Falha na alocacao de memoria.\n");
    }

    return 0;
}


char *Repete(char *s, int n){
    if (s == NULL || n <= 0) {
        return NULL; // Retorna NULL para entradas inv�lidas
    }

     size_t tamanho_str = strlen(s);
    // Calcula o tamanho total necess�rio: n c�pias de s, n-1 espa�os e o terminador nulo '\0'
    size_t tamanho_total = (tamanho_str * n) + (n - 1) + 1;

    char *ptr = (char *)malloc(tamanho_total);
    if (ptr == NULL) {
        return NULL; // Retorna NULL se a aloca��o de mem�ria falhar
    }

    // Copia a primeira string para o novo buffer
    strcpy(ptr, s);

    // Concatena as c�pias restantes com um espa�o no in�cio
    for (int i = 1; i < n; i++) {
        strcat(ptr, " ");
        strcat(ptr, s);
    }

    return ptr;
}
