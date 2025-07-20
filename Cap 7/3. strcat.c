#include<stdio.h>

/*String concat*/

int strlen(char *s){
    int i = 0;
    while(s[i] != '\0')
        i++;
    return i;
}

char *strcat(char *dest, char *orig){
    int i, len;
    for(i = 0, len = strlen(dest); orig[i] != '\0'; i++, len++)
        dest[len] = orig[i];
    dest[len] = '\0';
    return dest;
}

main(){
    char dest[50] = "rafael";
    char orig[50] = "rdacosta";

    printf(" %s\n", strcat(dest, orig));

}
