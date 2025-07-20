#include<stdio.h>
#include<string.h>

/*String palíndroma - se é lida da mesma forma da
esquerda para direita e direita para esquerda*/

int strpal(char *s){
    int i, j, count = 0;
    for(i = 0, j = strlen(s) - 1; i < j; i++, j--)
        if(s[i] != s[j])
            return 0;
    return 1;
}

main(){
    printf("%d\n", strpal("arara"));
}
