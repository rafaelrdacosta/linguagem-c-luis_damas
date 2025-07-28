#include<stdio.h>

/*Retorna o endere�o de str1 em que ocorre pela primeira vez
a substring str2. Caso n�o exista, retorna NULL*/

char * strstr(char *str1, char *str2){
    int i, ii, j, len = strlen(str1) - strlen(str2);
    for(i=0; i <= len; i++){
        for(ii=i, j=0; str1[ii]==str2[j] && str2[j] != '\0'; j++, ii++)
            ;
        if(str2[j]=='\0')
            return str1+i;
    }
    return NULL;
}

int main() {
    char string1[] = "Rafael";
    char string2[] = "fa";

    char *resultado = strstr(string1, string2);

    if (resultado)
        printf("Encontrado: %s\n", resultado);  // Sa�da esperada: "fael"
    else
        printf("Substring n�o encontrada.\n");

    return 0;
}
