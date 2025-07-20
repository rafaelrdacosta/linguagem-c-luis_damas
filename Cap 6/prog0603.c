#include<stdio.h>

void inic(int s[], int n){
    for(int i = 0; i < n; i ++)
        s[i] = 0;
}

void print_vet(int s[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", s[i]);
    putchar('\n');

}

main(){
    int v[10];
    int x[20];

    inic(v, 10);
    inic(x, 20);

    print_vet(v, 10);
    print_vet(x, 20);
}
