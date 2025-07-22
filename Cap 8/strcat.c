#include<stdio.h>

char *strcat(char *dest, char *orig){
    strcpy(dest+strlen(dest), orig);
    return dest;
}

main(){
    char dest[20] = "rafael";
    char orig[20] = " costa";

    printf("%s\n", strcat(dest, orig));

}
