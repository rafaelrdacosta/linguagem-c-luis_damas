#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Escreva um programa que solicite ao usuário
10 reais e os armazene em um arquivo.
Em seguida deve solicitar um número entre 1 e 10
e mostrar o valor que tinha introduzido nessa ordem.
Deverá também mostrar o primeiro e o último elemento
do arquivo.*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;
    float v[10], x;
    int i, n;

    /*Ler os dados a partir do teclado*/
    for(i = 0; i < 10; i++){
        printf("Introduza o %dº número real: ", i + 1);
        while((scanf("%f", &v[i])) == 0);
        fflush(stdin);
    }

    /*Abrir o arquivo DADOS1.DAT*/
    if((fp = fopen("DADOS1.DAT", "w+b")) == NULL){
        printf("Impossível abrir o arquivo %s\n", "DADOS1.DAT");
        exit(2);
    }

    /*Escrever os números no arquivo*/
    if(fwrite(v, sizeof(float), 10, fp) != 10)
        fprintf(stderr, "Não foram escritos todos os elementos!!\n");


    printf("Qual a ordem do número que pretende ver entre 1 e 10: ");
    scanf("%d", &n);


    /*Mostrar o enésimo número
    Para ler um determinado elemento temos que andar n-1*sizeof(float) a partir
    do início*/
    fseek(fp, (long)(n - 1)*sizeof(float), SEEK_SET);
    /*Depois de estarmos corretamente posicionados, lê-se o valor recorrendo
    a função fread*/
    fread(&x, sizeof(float), 1, fp);

    printf("\nO %dº valor introduzido foi %.2f\n", n, x);

    /*Mostrar o primeiro valor*/
    rewind(fp);
    fread(&x, sizeof(float), 1, fp);

    printf("\nO 1º valor introduzido foi %.2f\n", x);

    /*Mostrar o último valor
    Para ler o último elemento temos que colocar o apontador após o penúltimo
    elemento, para isso andamos para trás -1 sizeof(float) a partir do fim*/
    fseek(fp, -(long) sizeof(float), SEEK_END);
    fread(&x, sizeof(float), 1, fp);

    printf("\nO último valor introduzido foi %.2f\n", x);

    fclose(fp);
    return 0;
}
