#include<stdio.h>

char *strcpy(char *dest, char *orig){
    char *tmp = dest;
    while(*dest++ = *orig++)
        ;
    return tmp;
}

main(){
    char dest[20];
    char orig[20] = "rafael";

    printf("%s\n", strcpy(dest, orig));

}
