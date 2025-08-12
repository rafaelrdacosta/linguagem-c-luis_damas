#include<stdio.h>

void f_var_static(){
    static int var = 1;
    printf("f_var_static: %d\n", var);
    var++;
}

void f_var_normal(){
    int var = 1;
    printf("f_var_normal: %d\n", var);
}

int main(){
    int i;
    for(i=1; i<=5; i++){
        f_var_static(); /*A variável i irá manter o valor entre as chamadas das funções*/
    }
    putchar('\n');
    for(i=1; i<=5; i++){ /*A variável irá reiniciar a cada chamada da função*/
        f_var_normal();
    }
    return;
}
