#include<stdio.h>
#include<string.h>

/*Implemente a fun��o char *repete(char *s, int n)
que cria dinamicamente uma nova string com n c�pias
da string original, separadas por espa�o, exceto a
�ltima ocorr�ncia*/

char *repete(char *s, int n);


int main(){
    char string[]="Ola";
    printf("%s\n", repete(string, 3));
    return 0;
}

char *repete(char *s, int n){
    int i;
    char *ptr;
    ptr = (char *)malloc(n*(strlen(s)+1));
    if(ptr == NULL)
        return ptr;


    for(i=0, ptr[0]='\0'; i<n; i++){
       strcat(ptr, s);
       if(i!=n)
         strcat(ptr, " ");
    }
    return ptr;


}
