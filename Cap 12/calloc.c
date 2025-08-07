#include<stdiio.h>
#include<stdlib.h>
#include<string.h>


void *calloc(size_t num, size_t size){
    void *tmp;
    tmp = malloc(num*size);
    if(tmp != NULL)
        /*Memory set - inicializar ou limpar uma área de memória
preenchendo todos os bytes com o mesmo valor
void *memset(void *s, int c, size_t n)*/
        memset(tmp, '\0', num*size); /*iniciar toda a memória com ZERO ('\0')*/
    return tmp;
}
