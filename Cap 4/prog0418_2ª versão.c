#include<stdio.h>

main(){
    int num, i;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    for(i = num; ; i++){
        if(i % 10 == 0)
            break;
        else if(i % 3 == 0)
            continue;

        printf("%d\n", i);
    }


}
