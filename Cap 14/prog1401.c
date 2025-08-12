#include<stdio.h>
#include<locale.h>

/*Por padrão, o compilador atribui valores inteiros sequenciais para cada item, começando de 0.*/
enum dias {segunda, terca, quarta, quinta, sexta, sabado, domingo};

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    a = segunda;
    b = terca;
    a++;
    /*O compilador atribui os valores sequencialmente a partir de 0,
    isto é, a constante segunda fica definida com 0, terça como 1,
    quarta como 2 e assim por diante*/
    if(a==terca) /*a agora vale 1 e terça também vale 1, a condição
    será verdadeira*/
        puts("Estamos na Terça-Feira");

    return 0;
}
