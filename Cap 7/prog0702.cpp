#include<stdio.h>

main(){
	char nome[50];
	printf("Introduza o Nome completo: ");
	scanf("%49[^\n]s", nome);
	printf("Nome completo: %s", nome);
}
