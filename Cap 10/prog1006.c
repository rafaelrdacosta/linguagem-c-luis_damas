#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    int i=0, valor, n;

    /*Criar o arquivo lixo vazio*/
    if((fp = fopen("LIXO", "wb")) == NULL){
        printf("Impossível criar o arquivo %s\n", "LIXO");
        exit(1);
    }
    fclose(fp);

    if((fp = fopen("LIXO", "rb")) == NULL){
        printf("Impossível abrir o arquivo %s\n", "LIXO");
        exit(1);
    }
    /*Estamos diante de uma situação de EOF sempre que a posição
    corrente do arquivo estiver além do número de bytes que ele ocupa.

    Se abrirmos um arquivo vazio não estaremos em situação de EOF:*/
    puts(feof(fp)?"EOF":"NOT EOF"); /*saída NOT EOF*/

    /*Tentar ler um caractere:*/
    fgetc(fp);

    /*SÓ depois de se tentar ler um caractere a partir de um arquivo
    vazio é que temos a garantia de EOF*/
     puts(feof(fp)?"EOF":"NOT EOF"); /*saída EOF*/

    fclose(fp);

    return 0;
}
