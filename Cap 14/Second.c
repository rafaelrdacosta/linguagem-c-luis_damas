#include<stdio.h>

/*Implemente uma função através do uso de ponteiros
que recebe uma string e devolve o endereço em que
ocorre pela segunda vez o primeiro caractere da string*/

char *Second(char *s);

int main(){
    char string[] = "Rafael R da Costa";
    printf("%d\n", string+7);
    printf("%d\n", Second(string));
    return 0;
}

char *Second(char *s){
    if(*s == '\0')   /*String vazia*/
        return NULL;
    return strchr(s+1, *s);
}
