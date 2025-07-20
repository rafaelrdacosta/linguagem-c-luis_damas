#include<stdio.h>
#include<string.h>
#include<locale.h>

#define SEP_Nome ", "


main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char Nome[100];
	char Sobrenome[100];
	char Completo[100];
	
	while(1){
		puts("Insira um nome: ");
		gets(Nome);
		if (strlen(Nome)==0)
			printf("Nome inválido");
			break;
		
		puts("Insira o sobrenome: ");
		gets(Sobrenome);
		
		strcpy(Completo, Sobrenome);
		strcat(Completo, SEP_Nome);
		
		strcat(Completo, Nome);
		printf("Nome e sobrenome: %s\n", Completo);			
		
	}
}
