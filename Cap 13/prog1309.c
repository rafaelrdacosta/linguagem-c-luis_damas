#include <stdio.h>
#include <stddef.h> // Para a macro offsetof
#include <locale.h>

/**
 * Este programa demonstra como a macro offsetof � usada para
 * determinar o deslocamento (offset) de cada campo dentro de uma
 * estrutura. Tamb�m ilustra o conceito de alinhamento de mem�ria.
 */

typedef struct {
    int Campo1;         // Inteiro (4 bytes)
    double Campo2[100]; // Array de doubles (800 bytes)
    char Campo3[20];    // Array de chars (20 bytes)
} REG;

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Tamanho da estrutura REG: %d bytes\n", (int)sizeof(REG));
    printf("Tamanho de um int: %d bytes\n", (int)sizeof(int));
    printf("Tamanho de um double: %d bytes\n", (int)sizeof(double));
    printf("Tamanho de um char: %d bytes\n", (int)sizeof(char));
    printf("----------------------------------------\n");

    // offsetof retorna o deslocamento em bytes de um membro a partir do inicio da estrutura
    printf("Campo1 (int) comeca no Offset %d\n", (int)offsetof(REG, Campo1));
    printf("Campo2 (double[100]) comeca no Offset %d\n", (int)offsetof(REG, Campo2));
    printf("Campo3 (char[20]) comeca no Offset %d\n", (int)offsetof(REG, Campo3));

    return 0;
}

/* Para otimizar o acesso � mem�ria, o compilador alinha os campos das
 estruturas em "blocos" de mem�ria, geralmente com um tamanho igual ao
 do maior tipo de dado dentro da estrutura.

 O pr�ximo campo, Campo2, deveria come�ar no pr�ximo endere�o alinhado.
 Como Campo1 ocupa 4 bytes, o pr�ximo m�ltiplo de 8 � o endere�o 8.
 O compilador insere um "espa�o vazio" (padding) de 4 bytes entre Campo1
e Campo2.

*/
