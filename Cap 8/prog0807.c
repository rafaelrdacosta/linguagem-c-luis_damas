#include<stdio.h>
#include<locale.h>

/*Declare e inicie um vetor de strings e
mostre-as, uma a uma, recorrendo simplesmente
a ponteiros*/

#define N_STRINGS 3

main(){
    setlocale(LC_ALL, "Portuguese");
    char vetor[N_STRINGS][20] = {"Olá", "Antônio", "Susana"};
    char (*ptr)[20] = vetor; /*ponteiro para o vetor de 20 chars*/

    char *p;

    while(ptr-vetor < N_STRINGS){
        p = *ptr; /*p recebe a string apontada por ptr*/

        while(*p)
            putchar(*p++);
    putchar('\n');
    ptr++;
    }

}
