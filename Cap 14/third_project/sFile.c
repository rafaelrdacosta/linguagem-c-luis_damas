#include<stdio.h>
#include<string.h>

static void Troca(char **a, char **b){
    char *tmp = *a;
    *a = *b;
    *b = tmp;
}

static void Ordena(char *v[]){
    int alterou, i;

    do{
        for(alterou=i=0; v[i]!=NULL && v[i+1]!=NULL;i++){
            if(strcmp(v[i], v[i+1])>0)
            {
                Troca(&v[i], &v[i+1]);
                alterou=1;
            }
        }

    }while(alterou);
}

void sImprime_ordenado(int *v[]){
    int i;
    Ordena(v);
    puts("Imprimir Strings");
    puts("-----------------");
    for(i=0;v[i]!=NULL;i++)
        puts(v[i]);
    puts("-----------------");
}
