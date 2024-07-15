#include <stdio.h>

void lernumeros(int num[], int tam){
	printf("Escreva os numeros do vetor: ");
	for( int i = 0; i < tam; i++){
		scanf("%d", &num[i]);
	}
}
	void imprimirnumeros(int num[], int tam){
		printf("\nVetor");
		for(int i = 0; i < tam; i++){
		printf("%d", num[i]);	
		}
}
		void swap(int *a ,int *b){
			int aux=*a;
			*a = *b;
			*b =aux;
		}
	
void selectionsort(int num[], int tam){
	
	int menor_idx;
	for(int i = 0; i < tam - 1; i++){
		menor_idx = i;
		for(int j= i + 1;j < tam; j++ ){
			if(num(j) < num[menor_idx]){
				menor_idx = j;
			}
		}
		swap(&num[i], &num[menor_idx]);
	}
	
	int main(){
		
		int tam;
		
		printf("Escreva o tamanho do vetor:");
		scanf("%d", &tam);
		
		int num[tam];
		
		lernumeros(num, tam);
		
		printf("Vetor antes da ordenaçao: ");
		imprimirnumeros(num, tam);
		
		
	selectionsort(num,tam);
	
	printf("Vetor depois da ordenaçao: ");
	imprimirnumeros(num,tam);
	
	
	return 0;
		
		
		
		
	}
	
	
	
}