#include<stdio.h>
#include<string.h>

/*String count digits*/

int strcountd(char *s){
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++)
        if (isdigit(s[i]))
            count++;
    return count;
}

main(){
    char palavra[] = "15 abacates";

    printf("%d", strcountd(palavra));
}
