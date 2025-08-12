#include<stdio.h>
#include<string.h>

/*Coloca um asterisco em todas as posições de s,
deixando entre cada asterisco n caracteres da
string*/

char *str_asterisco(char *s, int n);

int main(){
    char string[] = "ABCDEFGH";
    printf("%s\n", str_asterisco(string, 3));
    return 0;
}

char *str_asterisco(char *s, int n){
    int i;
    for(i=0; s[i]!='\0'; i+=n+1){
        s[i] = '*';
    }
    return s;
}
