#include<stdio.h>

/*Compara as strings alfabeticamente*/

int strcmp(char *s1, char *s2){
    int i = 0;
    while(s1[i] == s2[i] & s1 != '\0')
        i++;
    return((unsigned char) s1[i] - (unsigned char) s2[i]);
}

main(){
    char s1[50] = "carlos", s2[50] = "carla";

    printf("%d\n", strcmp(s1, s2));
}
