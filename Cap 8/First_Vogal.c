#include<stdio.h>

/*Retorna o endereço em que ocorre a primeira vogal
na string s.
Caso não exista retorna NULL*/

int isvogal(char ch){
    ch = tolower(ch);
    return (ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u');
}

/*char * First_Vogal(char *s){
    char *ptr = s;
    while(*s != '\0'){
        if(isvogal(*s))
            return s;
        s++;
    }return NULL;

}*/

char *First_Vogal(char *s){
    const char vogais[] = "aeiou";
    int i;
    for(i=0; s[i] != '\0'; i++)
        if(strchr(vogais, tolower(s[i])) != NULL)
            return &s[i];
    return NULL;
}

main(){
    char string[] = "rafael";

    printf("%d\n", &string[1]);
    printf("%d\n", First_Vogal(string));
}
