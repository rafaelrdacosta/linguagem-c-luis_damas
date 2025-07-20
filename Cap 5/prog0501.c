#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;

    for(i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');

    printf("Números ente 1 e 5\n");

    for(i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');

    for(i = 1; i <= 5; i++)
        printf("%d\n", i);

    for(i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');



    return 0;
}
