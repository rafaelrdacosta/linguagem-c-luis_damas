#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    char s[] = "Exame";
    char *ps = s;
    char **pps = &ps;

    printf("Endereço de memória de s[0]: %d\n", &s[0]);
    printf("Valor do ponteiro ps: %d\n", ps);
    printf("Endereço de memória do ponteiro ps: %d\n", &ps);
    printf("%Valor armazenado no ponteiro pps: %d\n", pps);
    printf("Valor apontado pelo ponteiro pps: %s\n", *pps);

    printf("%c %c %c\n", *s, *ps, **pps);
    printf("%c %c %c\n", *(s + 1), *(ps+2), *(*pps+3));
    printf("%c %c %c\n", *(s + 4), *(ps+4), *(*pps+4));
    printf("%d %d %d\n", strlen(s), strlen(ps), strlen(*pps));

    printf("%d %d %d\n", &s[0], &ps, &pps);
}
