#include<stdio.h>

/*Desenha na tela um triângulo encostado à direita,
com base de n asteriscos*/

void Triangulo(int n);

int main(){
    Triangulo(5);
    return 0;
}

void Triangulo(int n){
    int i, j;
    for(i=0; i<n;i++){
        for(j=n; j>=0; j--)
           if(i >= j)
              putchar('*');
           else
              putchar(' ');
    printf("\n");
    }
}


