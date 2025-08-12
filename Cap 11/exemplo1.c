#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    struct Data{
        int dia, ano;
        char mes[12];
    }dt_nasc;

    dt_nasc.dia = 23;
    strcpy(dt_nasc.mes, "Janeiro");
    dt_nasc.ano = 1996;

    printf("%d/%s/%d\n", dt_nasc.dia, dt_nasc.mes, dt_nasc.ano);

    return 0;
}
