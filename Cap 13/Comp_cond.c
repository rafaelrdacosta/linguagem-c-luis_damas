#include <stdio.h>
#include <stdlib.h> // Necessario para a funcao system()

void limpar_tela() {
    #if defined(_WIN32)
        system("cls");
    #elif defined(__linux__) || defined(__APPLE__)
        system("clear");
    #else
        printf("Comando de limpar tela nao disponivel neste sistema.\n");
    #endif
}

int main() {
    printf("Este texto sera exibido na tela.\n");
    printf("Pressione Enter para limpar a tela...");
    getchar(); // Espera por um input do usuario

    limpar_tela();

    printf("A tela foi limpa!\n");

    return 0;
}
