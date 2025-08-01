#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;
    char s[100];

    puts("Introduza o nome do arquivo: ");
    scanf("%s", s);

    /*Abrir o arquivo*/
    fp = fopen(s, "r");

    /*Verificar se a abertura foi feita com sucesso*/
    if(fp == NULL)
        printf("Impossível abrir o arquivo %s.\n", s);
    else{
        printf("Arquivo %s aberto com sucesso!!!\n", s);
        printf("Endereço ponteiro para arquivo (fp) - %p\n", (void *)fp);
        fclose(fp);
    }
    return 0;
}
