#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, i, tmp;

    do{
       printf("\nDigite o 1º número inteiro: ");
        scanf("%d", &num1);
    }while(num1 < 0 || num1 > 255);

    do{
       printf("\nDigite o 2º número inteiro: ");
        scanf("%d", &num2);
    }while(num2 < 0 || num2 > 255);

    if(num1 > num2){
        tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    for(i = num1; i <= num2; i++)
        printf("%d -> %c\n", i, (char)i);


}
