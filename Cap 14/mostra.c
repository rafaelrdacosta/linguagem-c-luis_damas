#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Implementa um utilitario de linha de comando que exibe partes de arquivos de texto.
 * Sintaxe: mostra [-pos1] [-pos2] [a1...an] [-oarq_saida]
 *
 * - pos1 e pos2 sao as posicoes de inicio e fim (padrao: 1 e 80).
 * - a1...an sao os arquivos de entrada.
 * - oarq_saida eh o arquivo de saida opcional.
 */

#define MAX_LIN 80

// Protótipos de funções
void Mostra(FILE *fp, char *s, int pos1, int pos2);
int min(int a, int b);
int max(int a, int b);

// --- Funções Auxiliares ---
int min(int a, int b) {
    return a < b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

// --- Função Principal ---
int main(int argc, char **argv) {
    setlocale(LC_ALL, "Portuguese");
    int i;
    FILE *fin, *fout = stdout;
    char linha[MAX_LIN + 2]; // +1 para '\n' e +1 para '\0'

    int pos1 = 1, pos2 = 80;
    int arquivo_saida_presente = 0;

    // --- 1. Tratar o parametro do arquivo de saida ---
    if (argc > 1 && strncmp(argv[argc - 1], "-o", 2) == 0) {
        arquivo_saida_presente = 1;
        if (strlen(argv[argc - 1]) > 2) { /*verificação a string do último argumento tem mais de dois caracteres,
o que significa que o nome do arquivo foi fornecido*/
            if ((fout = fopen(argv[argc - 1] + 2, "wt")) == NULL) {
                fprintf(stderr, "Impossivel criar o arquivo %s\nSaida sera direcionada para a tela.\n", argv[argc - 1] + 2);
                fout = stdout; /**/

            }
        }
        argc--; /* O ultimo parametro já foi tratado
        Ao reduzir argc, o loop subsequente que processa os arquivos de entrada ignorará esse último argumento.*/
    }

    // --- 2. Tratar parametros de posicao (-pos1, -pos2) ---
    i = 1; /*percorrer os argumentos de linha de comando*/
    if (argc > i && argv[i][0] == '-') { /* Ela verifica se o primeiro caractere do argumento atual (que é o argv[1]) é um hífen (-).
Em utilitários de linha de comando, o hífen é a convenção para indicar que o argumento é uma flag ou um parâmetro, e não um nome de arquivo.*/
        pos1 = atoi(argv[i] + 1); /*converte a string após a flag '-' para número inteiro*/
        pos1 = min(max(pos1, 1), MAX_LIN); /*garantir que a pos1 esteja entre 1 e 80*/
        i++;

        if (argc > i && argv[i][0] == '-') {
            pos2 = atoi(argv[i] + 1);  /*converte a string após a flag '-' para número inteiro*/
            pos2 = min(max(pos2, 1), MAX_LIN); /*garantir que a pos2 esteja entre 1 e 80*/
            i++;
        }
    }

    // Ajustar posicoes se a ordem estiver incorreta
    if (pos1 > pos2) {
        int temp = pos1;
        pos1 = pos2;
        pos2 = temp;
    }

    // --- 3. Processar os arquivos de entrada ---
    for (; i < argc; i++) { /*O valor de i foi ajustado em trechos anteriores. Ele começa após os argumentos de posição (como -pos1 e -pos2)
e o arquivo de saída (como -osaida.txt)*/
        fin = fopen(argv[i], "rt"); /*tentar abrir o arquivo cujo nome está no argumento atual argv[i]*/
        if (fin == NULL) {
            fprintf(stderr, "Erro: Nao foi possivel abrir o arquivo '%s'.\n", argv[i]);
            continue; /*Esta instrução faz com que o programa pule para a próxima iteração do loop,
ignorando o arquivo que falhou e tentando processar o próximo.*/
        }

        fprintf(fout, "\n--- Conteudo de '%s' ---\n", argv[i]);
        while (fgets(linha, sizeof(linha), fin) != NULL) { /*loop principal para ler o arquivo linha por linha.*/
            // Remover o '\n' se ele existir
            size_t len = strlen(linha);
            if (len > 0 && linha[len - 1] == '\n') {
                linha[len - 1] = '\0';
            }
            Mostra(fout, linha, pos1, pos2);
        }
        fclose(fin);
    }

    // Fechar o arquivo de saida se nao for stdout
    if (fout != stdout) {
        fclose(fout);
    }

    return 0;
}

// --- Funções de Exibição ---

/*
 * Exibe os caracteres entre as posicoes pos1 e pos2 de uma string.
 * param fp Ponteiro para o arquivo de saida.
 * param s A string a ser processada.
 * param pos1 Posicao de inicio (base 1).
 * param pos2 Posicao de fim (base 1).
 */
void Mostra(FILE *fp, char *s, int pos1, int pos2) {
    int len = strlen(s), i;
    for (i = pos1; i <= pos2 && i <= len; i++) {
        fputc(s[i - 1], fp);
    }
    fputc('\n', fp);
}
