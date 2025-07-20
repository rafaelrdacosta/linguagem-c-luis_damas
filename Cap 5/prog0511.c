#include<stdio.h>
#include<locale.h>

float Pot(float x, int n){
    float produto = 1;
    if(n == 0)
        return 1;
    else
        for(int i = 1; i <= n; i++)
            produto *= x;
    return produto;
}


int main(){
    setlocale(LC_ALL, "Portuguese");
    int expoente;
    float base;

    printf("Digite a base e o expoente da potência: ");
    scanf("%f %d", &base, &expoente);

    printf("Potência: %.1f\n", Pot(base, expoente));

}
