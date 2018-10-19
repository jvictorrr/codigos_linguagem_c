#include<stdio.h>

int main(){
	int A[5];
	int maior;
	int pos;

	
	printf("Entre com os valores de preenchimento do vetor \n");
	for(int i=0;i<5;i++){
		printf("A[%d] = ",i);
		scanf("%d",&A[i]);
	}
	maior= A[0];
	for(int j=0;j<5;j++){
		if(A[j]>= maior){
			maior= A[j];
			pos= j;
		}
	}
	printf("O maior: %d \nPosicao: %d \n",maior,pos);
	return 0;
}