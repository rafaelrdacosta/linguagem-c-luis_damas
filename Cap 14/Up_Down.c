#include<stdio.h>
#include<ctype.h>

/**
 * Este programa demonstra como modificar uma string in-place,
 * alternando a caixa de seus caracteres (maiúscula e minúscula).

 Transforma os caracteres de uma string, alternando entre
 * maiusculas e minusculas. O primeiro caractere sera maiusculo, o
 * segundo minusculo, e assim por diante.
 *
 * O ponteiro para a string a ser processada.
 * O ponteiro para a string modificada.
 */
char *Up_Down(char *s);

int main(){
    char string[]="Palhaco";
    printf("String original: %s\n", string);
    printf("String transformada: %s\n", Up_Down(string));
    return 0;
}

char *Up_Down(char *s){
    int i = 0; // Usaremos um indice para a logica de alternancia
    char *ptr = s; // Um ponteiro para iterar, mantendo 's' como referencia

    // O loop continua ate encontrar o terminador nulo da string
    while (*ptr != '\0') {
        // Verifica se a posicao e par (0, 2, 4, ...)
        if (i % 2 == 0) {
            *ptr = toupper(*ptr);
        } else { // Se a posicao for impar (1, 3, 5, ...)
            *ptr = tolower(*ptr);
        }

        ptr++; // Avanca para o proximo caractere na string
        i++;   // Incrementa o contador para a proxima iteracao
    }

    // Retorna o ponteiro original para a string, agora modificada
    return s;
}
