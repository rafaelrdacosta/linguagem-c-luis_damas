#include<stdio.h>

/*Retorna o número de segundos contidos em um
conjunto de horas*/

long int n_segundos(int n_horas);

int main(){
    int h = 2;
    printf("Nr de segundos em %d hora(s): %d\n", h, n_segundos(h));
    return 0;
}

long int n_segundos(int n_horas){
    return n_horas*3600L;
}
