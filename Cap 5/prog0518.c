#include<stdio.h>

float Max(float x, float y, float z){
    if(x > y && x > z)
        return x;
    if(y > x && y > z)
        return y;
    else
        return z;
}

main(){
    float x, y, z;

    printf("Digite 3 numeros: ");
    scanf("%f %f %f", &x, &y, &z);

    printf("Maior: %.1f\n", Max(x, y, z));

}
