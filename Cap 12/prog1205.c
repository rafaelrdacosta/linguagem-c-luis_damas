#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>


/*Implemente a fun��o char *Metade(char *s) que cria
dinamicamente uma nova string contendo apenas metade
da string*/

/*Prot�tiipo da fun��o*/
char *Metade(const char *s);

int main(){
    setlocale(LC_ALL, "Portuguese");
    char string_original[] = "Rafael Costa";
    char *string_metade;

    // Chama a fun��o para criar a nova string
    string_metade = Metade(string_original);

    if (string_metade != NULL) {
        printf("String original: \"%s\"\n", string_original);
        printf("Resultado: \"%s\"\n", string_metade);

        // Libera a mem�ria alocada dinamicamente
        free(string_metade);
    } else {
        printf("Erro: Falha na alocacao de memoria.\n");
    }

    return 0;
}

char *Metade(const char *s){
    if (s == NULL) {
        return NULL; // Retorna NULL para entrada inv�lida
    }

    // Calcula o tamanho da metade da string. A divis�o inteira garante
    // que o tamanho ser� arredondado para baixo, se necess�rio.
    size_t tamanho_metade = strlen(s) / 2;

    // Aloca mem�ria para a nova string (tamanho da metade + 1 para o '\0')
    char *ptr = (char *)malloc(tamanho_metade + 1);
    if (ptr == NULL) {
        // Retorna NULL se a aloca��o de mem�ria falhar
        return NULL;
    }

    /* Copia a primeira metade da string original para a nova string
    O uso de strncpy � mais seguro para evitar estouro de buffer
    char *strncpy(char *destino, const char *origem, size_t n);
    size_t n: O n�mero m�ximo de caracteres a serem copiados.*/
    strncpy(ptr, s, tamanho_metade);

    // Adiciona o terminador nulo na posi��o correta
    ptr[tamanho_metade] = '\0';

    return ptr;
}
