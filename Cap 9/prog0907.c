#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
    int total;
    argv++; /*passar ao argv[1]*/
    for(total = 0; *argv!=NULL; argv++)
        total += atoi(*argv);  /*converte os valores que s�o passados
    como string para inteiros*/
    printf("%d\n", total);

    return 0;
}
