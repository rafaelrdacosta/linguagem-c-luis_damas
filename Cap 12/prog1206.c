#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

/*Implementa fun��o char *Inverte(char *s) que cria dinamicamente
uma nova string contendo a string s invertida*/

char *Inverte(const char *s);

int main(){
    setlocale(LC_ALL, "Portuguese");
    char string_original[] =  "Bento Ara�jo";
    char *string_invertida;

    string_invertida =  Inverte(string_original);

    if(string_invertida != NULL){
        printf("String original: %s\n", string_original);
        printf("String invertida: \"%s\"\n", string_invertida);

        // Libera a mem�ria alocada dinamicamente
        free(string_invertida);
    }else
        printf("Erro ao alocar mem�ria!!\n");

    return 0;
}

char *Inverte(const char *s){
    if(s == NULL)
        return NULL; //Return NULL para entrada inv�lida

    char *ptr = (char *) malloc(strlen(s)+1);
    if(ptr == NULL)
     // Retorna NULL se a aloca��o de mem�ria falhar
        return NULL;

    int i, j = strlen(s) - 1;
    for(i = 0; i < strlen(s); i++){
       ptr[i] = s[j];
       j--;
    }
    ptr[strlen(s)] = '\0';

    return ptr;
}
