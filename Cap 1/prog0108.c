#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("\nPrograma que apresenta os caracteres especiais:\n\n");
    printf("\\n - Mudan�a de linha\n");
    printf("\\ - Caracter especial\n");
    printf("\\t - Tabula��o horizontal\n");
    printf("%% - Caracter especial\n");
    return 0;
}
