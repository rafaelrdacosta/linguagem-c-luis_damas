#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    do{
        printf("\n\tMENU PRINCIPAL\n");
        printf("\n1 - Clientes\n");
        printf("2 - Fornecedores\n");
        printf("3 - Encomendas\n");
        printf("4 - Sair\n");
        printf("Digite a op��o desejada: ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                puts("Op��o CLIENTES");
                break;
            case 2:
                puts("Op��o FORNECEDORES");
                break;
            case 3:
                puts("Op��o ENCOMENDAS");
                break;
            case 4:
                puts("Saindo...");
                break;
            default:
                puts("Op��o Inv�lida!\n");
        }
    }while(opcao != 4);
}
