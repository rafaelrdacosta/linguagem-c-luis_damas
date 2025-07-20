#include<stdio.h>

long int num(int n_horas, char tipo){

    if(tipo == 'h' || tipo == 'H')
        return (long) n_horas;
    else if(tipo == 'm' || tipo == 'M')
        return (long) n_horas * 60;
    else if(tipo == 's' || tipo == 'S')
        return (long) n_horas * 3600;
    else
        return 0;
}


main(){
    int horas;
    char tipo;

    printf("Nr horas e o tipo(h, m, s): ");
    scanf("%d %c", &horas, &tipo);

    printf("num(%d, %c) --> %ld\n", horas, tipo, num(horas, tipo));
}
