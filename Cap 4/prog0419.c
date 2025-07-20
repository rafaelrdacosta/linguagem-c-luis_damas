#include<stdio.h>

main(){
    /*for(int i = 1; i <= 20; i++)
        if (i == 10)
            continue;
        else
            printf("%d ", i);*/

        int i = 1;
        while(i <= 20){
           if(i == 10){
                 i++;
                continue;
           }
           else
              printf("%d ", i);
           i++;
        }



}
