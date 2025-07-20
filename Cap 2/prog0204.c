#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    printf("O tamanho em bytes de um Inteiro = %d\n", sizeof(int));
}
