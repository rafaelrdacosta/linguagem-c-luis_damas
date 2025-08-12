#include<stdio.h>
#include<stdlib.h>

/*Retorna uma string criada dinamicamente com n caracteres,
sendo iniciada com os primeiros n caracteres da tabela ASCII
e começando no caractere inic*/

char *Ascii_Create(int n, char inic);

int main(){
    char *str;
    str = Ascii_Create(5, 'p');
    if(str!=NULL){
        printf("%s\n", str);
        free(str);
    }else
        fprintf(stderr, "Erro: Não foi possível alocar memória!\n");
    return 0;
}

char *Ascii_Create(int n, char inic){
    char *ptr;
    int i;
    // Tenta alocar n+1 bytes para a string e o terminador nulo
    if((ptr = (char *) malloc(n+1))==NULL)
        // Se a alocacao falhar, retorna NULL
        return NULL;
    for(i = 0; i<n; i++){
        ptr[i] = inic+i;
    }ptr[i] = '\0';
    return ptr;
}
