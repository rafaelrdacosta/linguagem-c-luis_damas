#include<stdio.h>

/*String count char*/

int strcountc(char *s, char ch){
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++)
        if(s[i] == ch)
            count++;
    return count;
}

main(){
    char palavra[] = "abacate";
    char letra = 'a';

    printf("%d", strcountc(palavra, letra));
}
