#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Utilitário de linha de comando para contar caracteres por linha.
 * Sintaxe: conta [-l][arq]
 * -l: opcional, mostra o número das linhas.
 * arq: opcional, arquivo de entrada. Se não for fornecido, usa o stdin.
 */

#define OPCAO "-l"

enum BOOL {FALSE, TRUE};

int main(int argc, char **argv) {
    int mostra_linhas = FALSE;
    int n_chars = 0;
    int n_linhas = 0;
    FILE *fp = stdin;
    int ch;

    // --- Lógica de Manipulação de Argumentos de Linha de Comando ---

    // 1. O primeiro argumento (se existir) pode ser a opcao -l.
    if (argc > 1 && strcmp(argv[1], OPCAO) == 0) {
        mostra_linhas = TRUE;
    }

    // 2. O segundo argumento (se a opcao -l estiver presente) ou o primeiro
    // (se não houver opcao) pode ser o arquivo.
    // O valor de `i` aponta para o primeiro argumento que pode ser um arquivo.
    int i = (mostra_linhas) ? 2 : 1;

    if (argc > i) {
        if ((fp = fopen(argv[i], "rt")) == NULL) {
            fprintf(stderr, "Erro: Impossivel abrir o arquivo %s\n", argv[i]);
            exit(1);
        }
    } else if (argc > i && strcmp(argv[i], OPCAO) == 0) {
        // Trata o caso de opção e arquivo estarem em ordem errada
        fprintf(stderr, "Erro: Opcao '%s' em posicao invalida.\n", OPCAO);
        exit(1);
    }

    // --- Lógica Principal: Leitura e Contagem ---

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            if (mostra_linhas) {
                printf("%d ", ++n_linhas);
            }
            printf("%d\n", n_chars);
            n_chars = 0;
        } else {
            n_chars++;
        }
    }

    // Trata o caso de a ultima linha nao terminar com '\n'
    if (n_chars > 0) {
        if (mostra_linhas) {
            printf("%d ", ++n_linhas);
        }
        printf("%d\n", n_chars);
    }

    // Fecha o arquivo se ele não for o stdin
    if (fp != stdin) {
        fclose(fp);
    }

    return 0;
}
