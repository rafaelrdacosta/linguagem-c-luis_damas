#include<stdio.h>
#include<locale.h>
#include<string.h>

#define OP_SAIR "SAIR"

int strcountc(char *s, char ch){
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++)
        if(s[i] == ch)
            count++;
    return count;
}

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

void Separa(char *Nome, char *Sobrenome){
    int i, j;

    if(strcountc(Nome, ' ' == 0)){
        Sobrenome[0] = '\0';
        return;
    }

    for(i=strlen(Nome)-1, j=0; Nome[i] != ' '; )
        Sobrenome[j++] = Nome[i--];
    Sobrenome[j] = '\0';
    Nome[i] = '\0';

    strrev(Sobrenome);
}

main(){
    setlocale(LC_ALL, "Portuguese");

    char Nome[100], Sobrenome[20];

    while(1){
        printf("Nome: ");
        gets(Nome);

        if(stricmp(Nome, OP_SAIR) == 0)
            break;
        Separa(Nome, Sobrenome);
        printf("%s, %s\n", wordupr(Sobrenome), wordupr(Nome));
    }

}
