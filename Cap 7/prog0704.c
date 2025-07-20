#include<stdio.h>

main(){
    char Nome[50];

    while(1){
        puts("Nome: ");
        gets(Nome);

        if(Nome[0] == '\0')
            break;
        else
            printf("Nome introduzido: %s\n", Nome);
    }
}
