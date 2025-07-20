#include<stdio.h>

/*Recebe uma string e deixa-lhe apenas
os caracteres maiúsculos*/

char *ALL_Big(char *s){
    int i, j;
    for(i=j=0; s[i] != '\0'; i++)
        if(isupper(s[i])){
            s[j] = s[i];
            j++;
    }
    s[j] = '\0';
    return s;
}

main(){
    char string[50] = "Era uma Vez";
    printf("%s\n", ALL_Big(string));

}
