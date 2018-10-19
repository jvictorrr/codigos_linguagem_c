/// Autor: João Victor Rodrigues Ramalho
/// Universidade Federal de Campina Grande
/// joao.ramalho@ee.ufcg.edu.br

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main ()
{
	srand(time(NULL));
	int matriz[4][4];
	int contador[20] = {0};
	int aux=0;
	int maior;
	int k;
	for(int i = 0; i < 4; i++)
	{
		printf("\n");
		for(int j = 0; j < 4; j++)
		{
			matriz[i][j] = rand() % 20;
			printf("\t%d",matriz[i][j]);
		}
	}
	for(k = 0; k < 20; k++)
	{
		for(int i = 0; i < 4; i++)
		{
			for(int j = 0; j < 4; j++)
			{
			if(matriz[i][j]==k)
				contador[k]++;	
			}
		}
		if(contador[k]>=aux){
			maior=k;
			aux=contador[k];
		}
	}
	fflush(stdin);
	printf("\nO numero que mais apareceu foi %d  aparecendo %d vezes\n",maior,contador[maior]);
	return 0;
}
