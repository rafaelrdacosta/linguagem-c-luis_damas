#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
    int i, total;
    for(i = 1, total = 0; i < argc; i++)
        total += atoi(argv[i]);  /*converte os valores que são passados
    como string para inteiros*/
    printf("%d\n", total);

    return 0;
}
