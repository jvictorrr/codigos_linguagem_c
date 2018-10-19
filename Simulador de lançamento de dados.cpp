/// Autor: João Victor Rodrigues Ramalho
/// Universidade Federal de Campina Grande
/// joao.ramalho@ee.ufcg.edu.br

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int d1, d2;
	srand(time(NULL));
	fflush(stdin);
	int n=0;
	do{
	d1 = ((rand() % 6) + 1);
	d2 = (rand() % 6) + 1;

	if (d1 > d2)
		printf("Dado 1: %d \n Dado 2: %d \n Dado 1 > Dado 2\n",d1,d2);
	else if(d1 < d2)
		printf("Dado 1: %d \n Dado 2: %d \n Dado 1 < Dado 2\n",d1,d2);
	else
		printf("Dado 1: %d \n Dado 2: %d \n Dado 1 = Dado 2\n",d1,d2);
	printf("Deseja continuar? Digite -1 para sair ou qualquer numero para continuar ");
	scanf("%d",&n);
	}while(n!=-1);
	return 0;
}
