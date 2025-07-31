#include<stdio.h>

/*Retorna 0 se ambas as strings forem iguais,
um valor negativo se s1 for alfabeticamente menor que s2,
e um valor positivo caso contrário*/

int strcmp(char *s1, char *s2);

main(){
    char s1[] = "rafael";
    char s2[] = "costa";
    printf("%d\n", strcmp(s1, s2));
}

int strcmp(char *s1, char *s2){
    if(*s1=='\0' || *s2=='\0' || *s1!=*s2) /*critério de término é algumas
    das strings terminar ou algum caracter ser diferente um do outro*/
        return *s1 - *s2;
    else
        return strcmp(s1+1, s2+2); /*chamada recursiva*/
}
