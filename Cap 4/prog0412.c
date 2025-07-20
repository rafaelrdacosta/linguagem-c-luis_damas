#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    for(i = 1; i <= 100; i++)
        if(i == 60)
            break;
        else
            if(i % 2 == 1)
                continue;
            else
                printf("%2d ", i);
    printf("\nFIM DO LAÇO\n");
}
