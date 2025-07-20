#include<stdio.h>

main(){

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 10; j++){
            printf("%2d x %2d = %2d\n", i, j, i * j);
        }
        if(i != 5){ //para não parar na última iteração de i
          printf("\nTecle <ENTER> para continuar...\n");
        getchar();
        }
    }
}
