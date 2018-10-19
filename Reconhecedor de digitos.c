#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void contagem(int a,int *cont);
void mostra(int a,int *b);
int main() {
	int cont[10] = { 0 };
	int num;
	printf("Entre com um numero inteiro\n");
	scanf("%d", &num);
	contagem(num, cont);
	mostra(num, cont);
	system("pause");
	return 0;
}
void contagem(int a, int *cont) {
	int aux = a;
	int dig=0;
	for (int i = 0; i < 10; i++) {
		while (true) {
			dig = a % 10;
			if (dig == i)
				cont[i]++;
			a = a / 10;
			if (a == 0)
				break;
		}
		a = aux;
	}
}
void mostra(int a, int *cont) {
	printf("O seu numero eh %d\n", a);
	for (int i = 0; i < 10; i++) 
		printf("O digito %d aparece %d vezes em seu numero\n", i, cont[i]);
	
}