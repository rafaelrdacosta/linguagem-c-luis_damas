#include<stdio.h>

main(){

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 10; j++){
            printf("%2d x %2d = %2d\n", i, j, i * j);
        }
        if(i != 5){ //para n�o parar na �ltima itera��o de i
          printf("\nTecle <ENTER> para continuar...\n");
        getchar();
        }
    }
}
