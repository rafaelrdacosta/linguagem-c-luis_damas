#include<stdio.h>

/*Devolve o último índice em que encontrou o caractere ch em S.
Caso não exista devolve -1*/

int ult_ind_chr(char *s, char ch){
    int i;
    for(i = strlen(s) - 1; i >= 0; i--)
        if(s[i] == ch)
            return i;
    return -1;
}

main(){
    char string[50] = "alface";
    char ch = 'a';
    printf("%d\n", ult_ind_chr(string, ch));

}
