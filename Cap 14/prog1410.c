#include<stdio.h>

/*Mostra o conteúdo de um Byte em Bits*/
void Mostra_Byte(unsigned char ch){
    int i;
    for(i=7; i>=0; i--){
        printf("%d", (ch>>i) & 1);
    }
}

int main(){
    unsigned char ch = 0;
    int i;


    for(i=0; i<8; i++){
       ch = ch + (1<<i); /*A cada iteração, a expressão 1 << i gera uma potência de 2.*/
       Mostra_Byte(ch);
       printf("\t%d\n", ch);
  }
}




