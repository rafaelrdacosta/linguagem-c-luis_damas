#include<stdio.h>
#include<locale.h>
#include<string.h>

char *wordupr(char *s){
    int i = 0;
    while(s[i] != '\0'){
        s[0] = toupper(s[0]);
        if(s[i - 1] == ' '){
            s[i] = toupper(s[i]);
        }
        else
            s[i] = tolower(s[i]);
        i++;
    }
    return s;
}

char *lastname(char *s){
    int i, j = 0;
    for(i = strlen(s) - 1; s[i] != ' '; i--){
        s[j] = s[i];
        j++;
    }
    s[j] = '\0';
    return s;
}



main(){
    char nome[100];
    char opcao[5];

    do{
       printf("Digite seu nome completo: ");
       gets(nome);

       printf("Nome: %s\n", wordupr(nome));
       printf("Sobrenome: %s\n", strrev(lastname(nome)));

    }while(opcao != "SAIR");



}
