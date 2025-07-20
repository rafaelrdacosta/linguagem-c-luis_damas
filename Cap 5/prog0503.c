#include<stdio.h>
#include<locale.h>

linha(){
    int i;

    for(i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;

    linha();

    printf("Números ente 1 e 5\n");

    linha();

    for(i = 1; i <= 5; i++)
        printf("%d\n", i);

    linha();

    return 0;
}

