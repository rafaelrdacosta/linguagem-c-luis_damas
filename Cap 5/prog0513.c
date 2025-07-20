#include<stdio.h>

float Pot(float b, int e){
    float res = 1;
    if(e == 0)
        return 1;
    else
        for(int i = 1; i <= e; i++)
            res *= b;
    return res;
}

float VAL(float x, int n, float t){
    float res;
    for(int i = 1; i <= n; i++)
        res += x / Pot(1 + t, i);
    return res;
}

main(){
    float valor, taxa;
    int anos;

    printf("Digite o valor, taxa e qtd anos: ");
    scanf("%f %f %d", &valor, &taxa, &anos);

    printf("%.1f", VAL(valor, anos, taxa));

}
