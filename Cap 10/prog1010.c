#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Escreva um programa que solicite ao usu�rio
10 reais e os armazene em um arquivo.
Em seguida deve solicitar um n�mero entre 1 e 10
e mostrar o valor que tinha introduzido nessa ordem.
Dever� tamb�m mostrar o primeiro e o �ltimo elemento
do arquivo.*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;
    float v[10], x;
    int i, n;

    /*Ler os dados a partir do teclado*/
    for(i = 0; i < 10; i++){
        printf("Introduza o %d� n�mero real: ", i + 1);
        while((scanf("%f", &v[i])) == 0);
        fflush(stdin);
    }

    /*Abrir o arquivo DADOS1.DAT*/
    if((fp = fopen("DADOS1.DAT", "w+b")) == NULL){
        printf("Imposs�vel abrir o arquivo %s\n", "DADOS1.DAT");
        exit(2);
    }

    /*Escrever os n�meros no arquivo*/
    if(fwrite(v, sizeof(float), 10, fp) != 10)
        fprintf(stderr, "N�o foram escritos todos os elementos!!\n");


    printf("Qual a ordem do n�mero que pretende ver entre 1 e 10: ");
    scanf("%d", &n);


    /*Mostrar o en�simo n�mero
    Para ler um determinado elemento temos que andar n-1*sizeof(float) a partir
    do in�cio*/
    fseek(fp, (long)(n - 1)*sizeof(float), SEEK_SET);
    /*Depois de estarmos corretamente posicionados, l�-se o valor recorrendo
    a fun��o fread*/
    fread(&x, sizeof(float), 1, fp);

    printf("\nO %d� valor introduzido foi %.2f\n", n, x);

    /*Mostrar o primeiro valor*/
    rewind(fp);
    fread(&x, sizeof(float), 1, fp);

    printf("\nO 1� valor introduzido foi %.2f\n", x);

    /*Mostrar o �ltimo valor
    Para ler o �ltimo elemento temos que colocar o apontador ap�s o pen�ltimo
    elemento, para isso andamos para tr�s -1 sizeof(float) a partir do fim*/
    fseek(fp, -(long) sizeof(float), SEEK_END);
    fread(&x, sizeof(float), 1, fp);

    printf("\nO �ltimo valor introduzido foi %.2f\n", x);

    fclose(fp);
    return 0;
}
