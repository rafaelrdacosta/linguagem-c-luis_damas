#include<stdio.h>
#include<locale.h>

/*Por padr�o, o compilador atribui valores inteiros sequenciais para cada item, come�ando de 0.*/
enum dias {segunda, terca, quarta, quinta, sexta, sabado, domingo};

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    a = segunda;
    b = terca;
    a++;
    /*O compilador atribui os valores sequencialmente a partir de 0,
    isto �, a constante segunda fica definida com 0, ter�a como 1,
    quarta como 2 e assim por diante*/
    if(a==terca) /*a agora vale 1 e ter�a tamb�m vale 1, a condi��o
    ser� verdadeira*/
        puts("Estamos na Ter�a-Feira");

    return 0;
}
