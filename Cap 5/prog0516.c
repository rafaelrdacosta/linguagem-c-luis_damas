#include<stdio.h>

long int num(int n_horas, char tipo){

    switch(tipo){
        case 'h':
        case 'H':
            return (long) n_horas;
        case 'm':
        case 'M':
            return (long) n_horas * 60;
        case 's':
        case 'S':
            return (long) n_horas * 3600;
    }
}


main(){
    int horas;
    char tipo;

    printf("Nr horas e o tipo(h, m, s): ");
    scanf("%d %c", &horas, &tipo);

    printf("num(%d, %c) --> %ld\n", horas, tipo, num(horas, tipo));
}
