#include<stdio.h>

main(){
    int x;
    int *ptr_x;      /*ponteiro para x*/
    int **ptr_ptr_x;    /* ponteiro para o ponteiro x*/

    /*Carga inicial dos ponteiros*/
    ptr_x = &x;
    ptr_ptr_x = &ptr_x;

    printf("x = %d -> &x = %ld\n", x, &x);
    printf("x = %d -> &x = %ld\n", *ptr_x, ptr_x);
    printf("x = %d -> &x = %ld\n", **ptr_ptr_x,
           );
}
