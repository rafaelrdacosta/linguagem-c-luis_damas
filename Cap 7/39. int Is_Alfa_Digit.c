#include <stdio.h>
#include <ctype.h>  // Para isalpha e isdigit

/*
  Verifica se a string contém alternadamente:
  letra - dígito - letra - dígito - ...
  Começando sempre com uma letra.
*/
int Is_Alfa_Digit(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (i % 2 == 0) { // posições pares: letra
            if (!isalpha(s[i]))
                return 0;
        } else { // posições ímpares: dígito
            if (!isdigit(s[i]))
                return 0;
        }
    }
    return 1; // passou todos os testes
}

int main() {
    char string[50] = "A1b2C3";
    printf("%d\n", Is_Alfa_Digit(string));  // Saída esperada: 1 (true)

    char invalida[50] = "A1B2X";
    printf("%d\n", Is_Alfa_Digit(invalida)); // Saída esperada: 0 (false)

    return 0;
}
