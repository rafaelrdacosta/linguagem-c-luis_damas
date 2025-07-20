#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int dia, mes, ano;

    printf("\nDigite um data no formato dd mm aaaa: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    switch(mes){
        case 2:
            if(dia >= 1 && dia <= 28 + ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0))
                printf("Data válida!\n");
            else
                printf("Data inválida!\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(dia >= 1 && dia <= 30)
                printf("Data válida!\n");
            else
                printf("Data inválida!\n");
            break;
        default:
            if(mes < 1 || mes > 12)
               printf("Data inválida!\n");
            else
                if(dia >= 1 && dia <= 31)
                    printf("Data válida!\n");
                else
                    printf("Data inválida!\n");
    }

    return 0;
}
