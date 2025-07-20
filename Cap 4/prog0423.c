#include<stdio.h>

main(){
    int conta, i;
    char ch;

    for(i = 0, conta = 1; i <= 255; i++){
       printf("%2d -> %c\n", i, (char)i);

       if(conta == 20){
            do{
               printf("Pressione C ou c para continuar...");
               scanf(" %c", &ch);
            }while(ch != 'c' && ch != 'C');
            conta = 1;
       }
       else
        conta++;
    }
}
