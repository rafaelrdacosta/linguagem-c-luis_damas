#include<stdio.h>

long int num(int n_horas, char tipo){
    long res = n_horas;
    switch(tipo){
        case 's':
        case 'S':
            res *= 60;
        case 'm':
        case 'M':
            res *= 60;
        case 'h':
        case 'H':
            res;
    }
    return res;
}


main(){
    int horas;
    char tipo;

    printf("Nr horas e o tipo(h, m, s): ");
    scanf("%d %c", &horas, &tipo);

    printf("num(%d, %c) --> %ld\n", horas, tipo, num(horas, tipo));
}
