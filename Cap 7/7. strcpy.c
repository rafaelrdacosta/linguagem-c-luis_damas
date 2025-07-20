#include<stdio.h>

/*String copy*/

char *strcpy(char *dest, char *orig){
    int i = 0;
    while(orig[i] != '\0'){
        dest[i] = orig[i];
        i++;
    }
    dest[i] = '\0'; //o laço termina sem colocar o delimitador na string destino
    return dest;
}

main(){
    char orig[50] = "Rafael Costa";
    char dest[50];

    printf("%s\n", strcpy(dest, orig));

}
