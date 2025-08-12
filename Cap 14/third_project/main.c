#include <stdio.h>

void iImprime_ordenado(int *);
void sImprime_ordenado(char **);


int main()
{
    int inteiros[]={2, 5, 7, 3, 0};

    char *strings[]={"odio", "felicidade", "amor", "choro", NULL};
    iImprime_ordenado(inteiros);
    sImprime_ordenado(strings);

    return 0;
}
