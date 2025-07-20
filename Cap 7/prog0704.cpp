#include<stdio.h>
#include<locale.h>

main(){
	char Nome[100];
	
	while(1){
		printf("Introduza um nome: ");
		gets(Nome);
		
		if(Nome[0] =='\0')
			break;
		
		else
			printf("Nome Introduzido: %s\n", Nome);
	} 
}
