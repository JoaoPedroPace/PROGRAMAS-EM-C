#include<stdio.h>
#include<stdlib.h>

void lernumeros(int num[], int tam){
	printf("Escreva os numeros do vetor: ");
	for(int i = 0; i < tam; i++){
		scanf("%d", &num[i]);
	}
}
void imprimirnumeros(int num[], int tam){
	printf("\n Vetor:");
	for(int i = 0; i < tam; i++){
		printf(" %d", num[i]);
	}
}

int buscarvetor(int num[], int tam, int busca){
	for(int i = 0; i < tam; i++){
		if(num[i] == busca){
			return i;
		}
	}
	return -1;
}


int main(){
	
	int tam;
	int busca;
	
	printf("Escreva o tamanho do vetor:");
	scanf("%d", &tam);
	
	int num[tam];
	
	lernumeros(num,tam);
	imprimirnumeros(num, tam);
	printf("\nEscreva o valor a ser procurado: ");
	scanf("%d", &busca);
	
	int resultado = buscarvetor(num, tam, busca);
	if(resultado != -1){
		printf("VALOR ENCONTRADO NA POSIÇÃO: %d", resultado + 1);
	}
	else{
		printf("VALOR NAO ENCONTRADO! ");
	}
	
	
	
	

	return 0;
}