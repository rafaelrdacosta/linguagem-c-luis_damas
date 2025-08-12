#include<stdio.h>
#include<locale.h>
#include<ctype.h>

/*Retorna o número de horas, minutos ou segundos em
um conjunto de horas*/

long int num(int n_horas, char tipo);

int main(){
    int horas = 3;
    char tipo = 'H';
    printf("Tempo: %d\n", num(horas, tipo));
    return 0;
}

long int num(int n_horas, char tipo){
    int res = 1;
    switch(tolower(tipo)){
        case 's': res = res*60L;
        case 'm': res = res*60L;
        case 'h': res = res*n_horas;
    }
    return res;
}
