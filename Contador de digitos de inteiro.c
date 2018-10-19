#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool teste_num(int a);
int contagem(int a);
int dig_1(int a);
int main() {
	int num=0;
	while (num!=-1) {

		printf("Entre com um numero inteiro positivo maior que zero ou -1 para encerrar o programa\n");
		scanf("%d", &num);


		if (teste_num(num))
			printf("O primeiro digito eh %d e o numero de digitos que ele possui eh %d\n",dig_1(num), contagem(num));
		else if (num = !- 1)
				printf("entrada invalida \n");
	}
	system("pause");
	return 0;
}

bool teste_num(int a) {
	if (a > 0)
		return true;
	else
		return false;
}
int contagem(int a) {
	int total_dig=1;
	while (a >= 0) {
		a = a / 10;
		if (a > 0) {
			total_dig++;
		}
		else
			break;
	}
	return total_dig;
}
int dig_1(int a) {

	int dig;
	while (a >= 0) {
		a = a / 10;
		if (a > 0) {
			dig = a;
		}
		else
			break;
	}
	return dig;

}