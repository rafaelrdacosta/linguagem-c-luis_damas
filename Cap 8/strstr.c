#include<stdio.h>

/*Retorna o endereço de str1 em que ocorre pela primeira vez
a substring str2. Caso não exista, retorna NULL*/

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
        printf("Encontrado: %s\n", resultado);  // Saída esperada: "fael"
    else
        printf("Substring não encontrada.\n");

    return 0;
}
