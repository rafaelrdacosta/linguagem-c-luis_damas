#include<stdio.h>
#include<locale.h>

enum dias {segunda=2, terca=3, quarta=4, quinta=5, sexta=6, sabado=7, domingo=1};

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    a = segunda;
    b = terca;
    a++;

    if(a==terca) /*a agora vale 3 e terça também vale 3, a condição
    será verdadeira*/
        puts("Estamos na Terça-Feira");

    return 0;

    return 0;
}
