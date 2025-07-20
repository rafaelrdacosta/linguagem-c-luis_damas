#include<stdio.h>

main(){
	char Nome[50], Sobrenome[50];
	
	printf("Introduza o Nome: ");
	scanf("%s", Nome);
	
	printf("Introduza o sobrenome: ");
	scanf("%s", Sobrenome);
	
	printf("Nome Completo: %s %s\n", Nome, Sobrenome);
}
