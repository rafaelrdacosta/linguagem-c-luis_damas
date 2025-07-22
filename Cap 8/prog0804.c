#include<stdio.h>

int strlen(char *s){
    char *ptr = s; /*guardar o endereço inicial*/
    while(*s != '\0')
        s++;
    return (int)(s - ptr);
}

main(){
    char Nome[100];

    printf("Introduza um nome: ");
    gets(Nome);

    printf("%d\n", strlen(Nome));
}
