#include<stdio.h>

int main(){

    printf("Estou na linha %d\n", __LINE__);
    printf("Estou na linha %d\n", __LINE__);

    #line 8000

    printf("Estou na linha %d\n", __LINE__);
    printf("Estou na linha %d\n", __LINE__);

    return 0;
}
