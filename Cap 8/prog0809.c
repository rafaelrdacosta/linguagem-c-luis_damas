#include<stdio.h>

main(){
    char s[] = "Maria";
    char *ptr = s;

    printf("%c -> %c\n", *(s+2), *(ptr + 2));
    printf("%d -> %d\n", s, ptr);
    printf("%d -> %d\n", &s[1], ptr+1);
    printf("%d\n", &ptr);
}
