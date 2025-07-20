#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n_horas;
    long n_seg;

    printf("\nInforme o número de horas: ");
    scanf("%d", &n_horas);

    n_seg = n_horas < 0 ? 0 : n_horas * (long)3600;

    printf("\n%d hora(s) tem %d segundos.\n", n_horas, n_seg);
    return 0;
}
