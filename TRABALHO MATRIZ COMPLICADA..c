#include <stdio.h>

void lernumeros(int tam1, int tam2, int matriz[tam1][tam2]){
	printf("Escreva os elementos da matriz: ");
	for(int i =0; i < tam1; i++){
		for(int j =0; j < tam2; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
}

void swap(int *a, int *b){
	int  temp = *a;
	*a = *b;
	*b = temp;
}

void matrizemvetor(int tam1,int tam2, int matriz[tam1][tam2], int vetor[]){
	int k = 0;
	for(int i =0; i < tam1; i++){
		for(int j = 0; j < tam2; j++){
			vetor[k++]= matriz[i][j];
		}
	}
}

void vetoremmatriz(int tam1, int tam2, int matriz[tam1][tam2], int vetor[]){
	int k = 0;
	for(int i = 0; i < tam1; i ++){
		for(int j = 0; j < tam2; j++){
			matriz[i][j] = vetor[k++];
		}
	}
}

void imprimirnumeros(int tam1, int tam2, int matriz[tam1][tam2]){
	printf("\nConteudo do vetor: ");
	for(int i = 0; i  <tam1; i ++){
		for(int j = 0; j < tam2; j++){
			printf(" %d", matriz[i][j]);
		}
		printf("\n");
	}
}

void selectionsort(int tamanho, int vetor[]){

	for(int i = 0; i < tamanho - 1; i++){
	int	menor_idx = i;
	for(int j = i + 1; j < tamanho; j++){
		if(vetor[j] < vetor[menor_idx]){
			menor_idx = j;
		}
	}
	swap(&vetor[i], &vetor[menor_idx]);
	}
}
int main(){
    int tam1, tam2;


	
	printf("Escreva o tamanho das linhas da matriz: ");
	scanf("%d", &tam1);
	
	printf("Escreva o tamanho das colunas da matriz: ");
	scanf("%d", &tam2);
	
	int matriz[tam1][tam2];
	int tamanho = tam1 * tam2;
	int vetor[tamanho];
	
	lernumeros(tam1,tam2,matriz);
	
	printf("\nMatriz antes da ordenacao: ");
	imprimirnumeros(tam1,tam2,matriz);
	
	matrizemvetor(tam1,tam2,matriz,vetor);
	
    selectionsort(tamanho,vetor);
	
	vetoremmatriz(tam1,tam2,matriz,vetor);
	
	printf("\nMatriz depois da ordenaçao: ");
	imprimirnumeros(tam1,tam2,matriz);
	
}