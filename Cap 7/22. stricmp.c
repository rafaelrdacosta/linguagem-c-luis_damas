#include<stdio.h>

/*Faz o mesmo que a fun��o strcmp, mas realiza a compara��o
ignorando se os caracteres est�o mai�sculos ou min�sculos.
Ignore case*/

int stricmp(char *s1, char *s2){
    int i = 0;
    while(toupper(s1[i]) == toupper(s2[i]) && s1[i] != '\0'){
        i++;
    }
    return (toupper(s1[i]) - toupper(s2[i]));

}


main(){
    char s1[50] = "COSTA";
    char s2[50] = "RAFAEL";

    printf("%d\n", stricmp(s1, s2));
}
