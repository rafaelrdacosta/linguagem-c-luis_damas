#include<stdio.h>
#include<locale.h>

/*Má implementação*/

main(){
    setlocale(LC_ALL, "Portuguese");

    char ch1 = 'X', ch2 = 'Y';
    printf("Digite um número inteiro: ");
    scanf("%d", &ch2);

    printf("O valor de ch1 = '%c' e ch2 = '%c'\n", ch1, ch2);

    /*Digite um número inteiro: 16706
     O valor de ch1 = 'A' e ch2 = 'B'

     O erro ocorre porque ao digitar o número inteiro e esse
     ser armazenado em dois bytes, e como informado o endereço de
     memória de ch2 e este endereço está ao lado de ch1, e char ocupar apenas um
      byte, o valor do número digitado vai ser dividido em ch1 e ch2*/
}
