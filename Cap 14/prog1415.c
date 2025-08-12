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
        f_var_static(); /*A vari�vel i ir� manter o valor entre as chamadas das fun��es*/
    }
    putchar('\n');
    for(i=1; i<=5; i++){ /*A vari�vel ir� reiniciar a cada chamada da fun��o*/
        f_var_normal();
    }
    return;
}
