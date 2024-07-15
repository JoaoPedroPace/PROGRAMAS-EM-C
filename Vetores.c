#include<stdio.h>

#define MAX_CARROS 3
#define MAX_CHAR 50

int main(){
	float quilometragens[MAX_CARROS];
	 float litragens[MAX_CARROS];
	char modelo[MAX_CHAR][MAX_CARROS];
	for(int i = 0; i < MAX_CARROS; i++){
		printf("\nEscreva o modelo do seu carro: ");
		scanf("%s", modelo[i]);
		
		printf("\nEscreva o quanto foi gasto de combustível, em LITROS. ");
		scanf("%f", &litragens[i]);
		
		printf("\nEscreva quantos QUILOMETROS voce andou. ");
		scanf("%f", &quilometragens[i]);
	}
	
	printf("\nInformações dos carros: ");
	for(int i = 0; i < MAX_CARROS; i++){
		printf("CARRO %d", i + 1);
		printf("\n Quilometragens: %.2f", quilometragens[i]);
		printf("\nLitragens : %.2f", litragens[i]);
		printf("\nModelos : %s", modelo[i]);
	}
	
	
}