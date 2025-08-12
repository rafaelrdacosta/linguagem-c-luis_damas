#include <stdio.h>
#include <locale.h>

/**
 * Este programa demonstra como uma 'union' (união) funciona em C.
 * Ele mostra que todos os membros de uma união compartilham o mesmo
 * espaço de memória. Quando um membro é modificado, os outros membros
 * são sobrescritos com os bits do novo valor, resultando em dados
 * corrompidos se lidos incorretamente.
 */

// --- Definição da União ---
union Uni {
    char c;
    int n;
    float x;
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    union Uni uniao;

    // 1. Atribuindo um valor ao membro 'x' (float)
    uniao.x = 12345.6f;

    puts("--- Valores iniciais (uniao.x foi inicializada) ---");
    printf("Char: '%c'\n", uniao.c);  // Lixo, pois 'c' foi sobrescrito por 'x'
    printf("Int: %d\n", uniao.n);     // Lixo, pois 'n' foi sobrescrito por 'x'
    printf("Float: %7.2f\n", uniao.x); // Valor correto

    // 2. Atribuindo um valor ao membro 'n' (int)
    puts("\n--- Vou alterar apenas o membro 'n' (int) ---");
    uniao.n = 2500;

    printf("Char: '%c'\n", uniao.c);  // Lixo, pois 'c' foi sobrescrito por 'n'
    printf("Int: %d\n", uniao.n);     // Valor correto
    printf("Float: %7.2f\n", uniao.x); // Lixo, pois 'x' foi sobrescrito por 'n'

    // 3. Atribuindo um valor ao membro 'c' (char)
    puts("\n--- Vou alterar apenas o membro 'c' (char) ---");
    uniao.c = 'A';

    printf("Char: '%c'\n", uniao.c);  // Valor correto
    printf("Int: %d\n", uniao.n);     // Lixo, pois 'n' foi sobrescrito por 'c'
    printf("Float: %7.2f\n", uniao.x); // Lixo, pois 'x' foi sobrescrito por 'c'

    return 0;
}
