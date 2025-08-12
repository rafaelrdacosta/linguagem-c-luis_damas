#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;
    int i=0, valor;

    /*Abrir o arquivo DADOS.DAT*/
    if((fp = fopen("DADOS.DAT", "rb")) == NULL){
        printf("Imposs�vel ler o arquivo %s\n", "DADOS.DAT");
        exit(1);
    }

    /*Ler os dados do arquivo DADOS.DAT
    A fun��o fread retorna o nr de Elm lidos, por isso o resultado
    vai ser 1, que est� sendo aproveitado como valor l�gico - verdade*/
    while(fread(&valor,sizeof(int), 1, fp))
        printf("%2d� Nr: %d\n", ++i, valor);


    fclose(fp);
    return 0;
}
