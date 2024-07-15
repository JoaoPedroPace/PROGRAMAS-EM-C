#include <stdio.h>

void lernumeros(int num[], int tam){
	printf("Escreva os numeros do vetor: ");
	for(int i = 0 ; i <tam; i++){
		scanf("%d", &num[i]);		
	}
	}
	
void imprimirnumeros(int num[], int tam){
	printf("\n Vetor: ");
	for(int i = 0; i < tam; i++){
		printf(" %d ", num[i]);
	}
}	
	

void insectionsort(int num[], int tam){
	int j, aux;
	for( int i = 0; i < tam - 1; i++){
		if(num[i]> num[i+1]){
			aux = num[i+1];
			num[i+1] = num[i];
			num[i] = aux;
			j= i-1;
		while(j>=0){
			if(aux<num[j]){
				num[j+1]=num[j];
				num[j] = aux;
			}
			else{
				break;
			}
			j=j-1;
		}	
		}
	}
}

int main(){
	int tam;
	
	printf("Escreva o tamanho do vetor:");
	scanf(" %d", &tam);
	
	int num[tam];
	
	lernumeros(num, tam);
	
	printf("Vetor antes da ordenaçao:");
	imprimirnumeros(num,tam);
	
	insectionsort(num, tam);
	
	printf("\nVetor depois da ordenacao: ");
	imprimirnumeros(num, tam);
	
	
	
	
}

