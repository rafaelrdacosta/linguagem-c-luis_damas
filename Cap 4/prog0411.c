#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    for(i = 1; i <= 100; i  = i + 1)
        if(i == 30)
            break;
        else
            printf("%2d ", 2 * i);
    printf("\nFIM DO LAÇO\n");
}
