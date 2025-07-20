#include<stdio.h>

/*devolve o n-ésimo caractere da string s*/

char n_esimo(char *s, int n){
    return s[n - 1];
}

main(){
    char string[50] = "EraUmaVez";

    printf("%c\n", n_esimo(string, 3));

}
