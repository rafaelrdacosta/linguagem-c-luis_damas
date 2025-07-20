#include<stdio.h>

const int n = 10;

main(){
    float vetor[n];

    for(int i = 0; i < n; i++){
        vetor[i] = i * (n - 1);
    }

    for(int i = 0; i < n; i++)
        printf("%.2f\n", vetor[i]);
}
