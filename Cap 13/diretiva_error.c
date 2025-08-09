#include <stdio.h>

#if __LP64__ == 0
    #error Este codigo so pode ser compilado em arquiteturas de 64 bits.
#endif

int main() {
    printf("Compilacao bem-sucedida em um sistema de 64 bits.\n");
    return 0;
}
