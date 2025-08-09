#include <stdio.h>

char *meu_strncpy(char *destino, const char *origem, size_t n) {
    size_t i;

    // Copia os caracteres da origem para o destino
    for (i = 0; i < n && origem[i] != '\0'; i++) {
        destino[i] = origem[i];
    }

    // Preenche o restante do destino com '\0' se n for maior que o
    // tamanho da string de origem.
    for (; i < n; i++) {
        destino[i] = '\0';
    }

    return destino;
}

int main() {
    char origem[] = "Exemplo de string.";
    char destino[10];

    // Usando a minha propria implementacao
    meu_strncpy(destino, origem, 9);
    destino[9] = '\0'; // Adiciona o terminador nulo manualmente

    printf("Origem: %s\n", origem);
    printf("Destino: %s\n", destino);

    return 0;
}
