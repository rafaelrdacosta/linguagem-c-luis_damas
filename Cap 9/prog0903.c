#include<stdio.h>

/*Implemente a função void Calc(v, num, xmin, xmax)
que deverá colocar em xmin e em xmax o menor e o maior
valor exitente nos num primeiros floats do vetor v*/

void Calc(float *v, int num, float *xmin, float *xmax);

main(){
    float vetor[] = {10, 20, 30, 40, 50, 11, 12, 5, -33}, maior, menor;
    int n = 9;
    Calc(vetor, n, &menor, &maior);
    printf("Maior elemento %.1f\nMenor elemento %.1f\n", maior, menor);
}


void Calc(float *v, int num, float *xmin, float *xmax){
    int i;
    *xmin = *xmax = *v;
    for(i = 0; i <= num; i++){
        if(v[i] > *xmax)
            *xmax = v[i];
        if(v[i] < *xmin)
            *xmin = v[i];
      }
    }
