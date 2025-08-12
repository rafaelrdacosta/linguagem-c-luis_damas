#include <stdio.h>
#include <locale.h>

/**
 * Este programa demonstra a diferen�a de aloca��o de mem�ria
 * entre uma 'struct' (estrutura) e uma 'union' (uni�o) em C.
 * Ambas cont�m os mesmos tipos de dados, mas a struct aloca espa�o
 * para todos os membros simultaneamente, enquanto a union aloca
 * espa�o apenas para o seu maior membro.
 */

// --- Defini��o da Estrutura ---
struct Est {
    char c;
    int n;
    float x;
};

// --- Defini��o da Uni�o ---
union Uni {
    char c;
    int n;
    float x;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Tamanhos de tipos de dados basicos:\n");
    printf("Char  -> %d bytes\n", (int)sizeof(char));
    printf("Int   -> %d bytes\n", (int)sizeof(int));
    printf("Float -> %d bytes\n", (int)sizeof(float));

    printf("\n--- Comparacao de Tamanho ---\n");

    // A 'struct' aloca espaco para todos os seus membros
    printf("Dimensao da Estrutura (struct Est): %d bytes\n", (int)sizeof(struct Est));

    // A 'union' aloca espaco apenas para o seu maior membro
    printf("Dimensao da Uniao (union Uni): %d bytes\n", (int)sizeof(union Uni));

    return 0;
}
