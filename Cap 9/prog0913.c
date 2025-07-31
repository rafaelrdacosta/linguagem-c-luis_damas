#include<stdio.h>

/*long int Fib_Iter(int n){
    long int Fib_Iter[n + 1], i;
    Fib_Iter[0] = 0;
    Fib_Iter[1] = 1;
    for(i = 2; i < n; i++)
        Fib_Iter[i] = Fib_Iter[i - 2] + Fib_Iter[i - 1];
    for(i = 0; i < n; i++)
    printf("%li ", Fib_Iter[i]);
}
*/
long int Fib_Iter(int n){
    int i;
    long n1, n2,tmp;
    if (n < 0)
        return -1L; /*parâmetro inválido*/
    if (n <= 1)
        return 1L;

    for (int i = 2, n1=n2=1; i < n; i++) {
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    return n1 + n2;
}

long int Fib_Rec(int n){
    if (n < 0)
        return -1L; /*equivalente a return (long)1*/
    if (n <= 1)
        return 1L;  /*equivalente a return (long) 1
        Caso base: Fib(0) = 1, Fib(1) = 1*/
    else
        return Fib_Rec(n - 1) + Fib_Rec(n-2);
}

int main(){
    printf("\nFib_Iter = %ld\n", Fib_Rec(9));
    printf("\nFib_Rec = %ld\n", Fib_Rec(9));
}
