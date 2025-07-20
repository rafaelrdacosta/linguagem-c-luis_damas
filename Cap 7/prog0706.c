#include<stdio.h>


int *strcmp(char *s1, char *s2){
    int i = 0;
    while(s1[i] == s2[i] && s1[i] != '\0')
        i++;
    return((unsigned char)s1[i] - (unsigned char)s2[i]);
}

main(){
    char nome[50];

    printf("\nPara terminar o programa digite <SAIR>.\n");
    do{
        printf("Digite seu nome: ");
        gets(nome);

        puts(nome);

    }while(strcmp(nome, "SAIR") != 0);
    puts("\nTerminou o programa.\n\n");
}
