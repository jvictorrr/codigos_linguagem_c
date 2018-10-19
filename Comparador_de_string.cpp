#include<stdio.h>
#include<string.h>

int main (){
	char nome[]="Joao Victor";
	char tentativa[20];
	strlwr(nome);
	do{
		printf("quem voce acha que escreveu o programa?");
		gets(tentativa);
		strlwr(tentativa);
		if(strcmp(nome,tentativa)!=0)
			printf("Voce errou :( tente outra vez\n");
	}while(strcmp(nome,tentativa)!=0);
	
	
	
	printf("voce acertou!");
	return 0;
}