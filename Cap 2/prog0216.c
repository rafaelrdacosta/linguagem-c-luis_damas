#include<stdio.h>
#include<locale.h>

/*M� implementa��o*/

main(){
    setlocale(LC_ALL, "Portuguese");

    char ch1 = 'X', ch2 = 'Y';
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &ch2);

    printf("O valor de ch1 = '%c' e ch2 = '%c'\n", ch1, ch2);

    /*Digite um n�mero inteiro: 16706
     O valor de ch1 = 'A' e ch2 = 'B'

     O erro ocorre porque ao digitar o n�mero inteiro e esse
     ser armazenado em dois bytes, e como informado o endere�o de
     mem�ria de ch2 e este endere�o est� ao lado de ch1, e char ocupar apenas um
      byte, o valor do n�mero digitado vai ser dividido em ch1 e ch2*/
}
