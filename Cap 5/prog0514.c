#include<stdio.h>

long int n_segundos(int n_horas){
    return (long) n_horas * 3600;
}

main(){
    int horas;

    printf("Nr horas: ");
    scanf("%d", &horas);

    printf("n_segundos(%d) --> %ld\n", horas, n_segundos(horas));
}
