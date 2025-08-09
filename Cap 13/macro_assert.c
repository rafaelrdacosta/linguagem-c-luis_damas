#include<stdio.h>
#include<assert.h>

void Inc_Idade(int *ptr_idade){
    assert(ptr_idade != NULL);
    assert(*ptr_idade >= 0);
    (*ptr_idade)++; /*O operador de incremento tem preced�ncia sobre o operador de
    desrefer�ncia '*'  por isso os par�nteses*/
}

int main(){
    int x = 5;
    Inc_Idade(&x);

    x = -5;
    Inc_Idade(&x);
}
