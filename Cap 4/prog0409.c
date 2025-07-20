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
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                puts("Opção CLIENTES");
                break;
            case 2:
                puts("Opção FORNECEDORES");
                break;
            case 3:
                puts("Opção ENCOMENDAS");
                break;
            case 4:
                puts("Saindo...");
                break;
            default:
                puts("Opção Inválida!\n");
        }
    }while(opcao != 4);
}
