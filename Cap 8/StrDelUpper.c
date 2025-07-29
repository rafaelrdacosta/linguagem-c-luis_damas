#include<stdio.h>
#include<ctype.h>

/*Apaga todos os caracteres maiúsculos em s*/

char *StrDelStr(char *s){
    char *prim, *ptr;
    prim = ptr = s;

    while(*s){ /*equivalente a while(*s!='\0'*/
        if(islower(*s))
          *ptr++ = *s;
        s++;
    }
    *ptr = '\0';
    return prim;
}

main(){
    char string[50] = "RafAel";

    printf("%s\n", StrDelStr(string));
}
