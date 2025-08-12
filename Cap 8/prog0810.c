#include<stdio.h>

main(){
    int v[5] = {10, 20, 30, 40, 50};
    int *pv = v;
    int **ppv = &pv;

    printf("%d\n", v);
    printf("%d\n", pv);
    printf("%d\n", &pv);
    printf("%d\n", ppv);

    printf("%d %d %d\n", v[0], *v, **ppv);
    printf("%d %d %d\n", v[2], *(v + 3), *(*ppv + 4));
    printf("%d %d %d\n", v[0] - 1, *(v+1) - 1, *(*ppv + 2) - 1);

    printf("%d %d %d\n", &v[0], &pv, &ppv);
}
