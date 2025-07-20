#include<stdio.h>

/*torna a string s vazia*/

char *init_str(char *s){
    s[0] = '\0';
    return s;
}

main(){
    char nome[50] = "rafael";

    printf("string vazia: %s.\n", init_str(nome));

}
