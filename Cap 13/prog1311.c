#include<stdio.h>

#define MAX 20
#define m_dobro(x) 2*x

int main(){
    int var = 4;
    int f_dobro(int x){
        return 2*x;
    }
    /*Como iremos reparar a macro est� mal definida
    ent�o n�o teremos os resultados esperados*/
    printf("%d\n", m_dobro(MAX + 1)); //Sa�da = 41
    printf("%d\n", f_dobro(1-3)); //Sa�da = -4
    printf("%d\n", m_dobro(1-3)); //Sa�da = -1
    printf("%d\n", m_dobro(2+f_dobro(2+5))); //Sa�da = 18

    return 0;
}
