#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_LIN 80

/**
 * @brief Este utilitário lê um arquivo de texto, procura por linhas
 * que comecam com '$' seguidas de um numero e imprime o argumento
 * de linha de comando correspondente.
 * * Sintaxe: Mostra Arquivo [p1, p2, ... pk]
 * Exemplo de arquivo (PROG.TXT):
 * $2
 * $1
 * * Comando: Mostra PROG.TXT arg1 arg2
 * Saída:
 * arg2
 * arg1
 */
int main(int argc, char **argv) {
    setlocale(LC_ALL, "Portuguese");
    int pos;
    FILE *fin;
    char linha[MAX_LIN + 1];

    if (argc < 2) {
        fprintf(stderr, "Sintaxe: %s <arquivo> [p1] [p2] ...\n", argv[0]);
        return 1;
    }

    if ((fin = fopen(argv[1], "rt")) == NULL) {
        fprintf(stderr, "Erro: Impossivel abrir o arquivo %s!\n", argv[1]);
        exit(1);
    }

    while (fgets(linha, MAX_LIN + 1, fin) != NULL) {
        if (linha[0] == '$') {
            // Converte a string apos '$' para um numero inteiro
            pos = atoi(linha + 1);

            // A validacao deve garantir que o indice do array argv
            // nao ultrapasse o numero total de argumentos.
            // O indice do argumento p_n e n+1.
            // Ex: p1 esta em argv[2], p2 em argv[3]...
            // O ultimo argumento valido e argv[argc-1].
            if (pos > 0 && (pos + 1) < argc) {
                // Imprime o argumento correspondente
                puts(argv[pos + 1]);
            }
        }
    }

    fclose(fin);
    return 0;
}
