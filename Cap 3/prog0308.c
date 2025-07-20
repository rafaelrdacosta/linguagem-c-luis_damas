#include<stdio.h>
#include<locale.h>



main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b;

    printf("\nIntroduza dois nº: ");
    scanf("%d%d", &a, &b);

    /*Má indentação!!
    if(a >= 0)
        if(b > 10)
            printf("B é muito grande\n");
    else
        printf("A tem um valor negativo\n");
    */
    if(a >= 0){
        if(b > 10)
            printf("B é muito grande\n");
    }else

        printf("A tem um valor negativo\n");
}
