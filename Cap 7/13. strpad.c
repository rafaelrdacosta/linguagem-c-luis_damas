#include<stdio.h>

/*String pad*/

char *strpad(char *s){
    int i = strlen(s);
    s[2*i] = s[i]; /*Colocar o delimitador na nova posição*/
    for(i--; i>=0; i--){
        s[2*i] = s[i];
        s[2*i+1] = ' ';
    }
    return s;
}

int main(){
    char s[20] = "rafael";
    strpad(s);
    puts(s);
}
