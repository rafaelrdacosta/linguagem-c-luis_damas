#include<stdio.h>
#include<locale.h>


int strcmp(char *s1, char *s2){
	int i=0;
	while (s1[i] == s2[i] && s1[i]!='\0') /*a estratégia é percorrer as strings enquanto os caracteres foram iguais e não tiver chegado ao fim de nenhuma delas*/
		i++;
	return ((unsigned char ) s1[i] - (unsigned char ) s2[i]);  /*devolve a diferença entre os caracteres (valor tabela ASCII). return<0 - S1 alfabeticamente primeiro; return>0 S2 
																alfabeticamente vem primeiro*/
}


main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[50];
	char saida[] = "SAIR";
	
	do{
		puts("Escreva um nome: ");
		gets(nome);
		puts(nome);
	}
	while (strcmp(nome, saida)!=0);
	puts("Terminou o programa.\n");
}
