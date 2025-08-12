#include<stdio.h>
#include<locale.h>

#define TAXA_ICMS1 5
#define TAXA_ICMS2 17

#define Val_ICMS(Salario) (((Salario) < 10000)?(Salario)*(TAXA_ICMS1)/100.0:(Salario)*(TAXA_ICMS2)/100.0)

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x=0, y =2;
    printf("\nSalário = %f", Val_ICMS(x+y));
}
