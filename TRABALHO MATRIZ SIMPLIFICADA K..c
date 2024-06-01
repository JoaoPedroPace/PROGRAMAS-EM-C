#include <stdio.h>
void lernumeros(int tam1, int tam2, int matriz[tam1] [tam2]){
	printf("Escreva os numeros da matriz: ");
	for(int i = 0; i < tam1; i++){
		for(int j = 0; j < tam2; j++){
		
		scanf("%d",&matriz[i] [j]);
	}
}
}

void imprimirnumeros(int tam1, int tam2, int matriz[tam1] [tam2]){
	printf("Conteudo da matriz: \n");
	for(int i = 0; i < tam1; i++){
		for(int j = 0; j < tam2; j++){
			printf("Posiçao: %d %d Elemento = %d", i, j, matriz[i] [j]);
		}
		printf("\n");
	}
}
int main(){
	
	int tam1, tam2;	
	
	
	printf("Escreva o tamanho de linhas da matriz: ");
	scanf("%d", &tam1);
	printf("Escreva o tamanho das colunas da matriz: ");
	scanf("%d", &tam2);
	
		int matriz[tam1][tam2];
		
		lernumeros(tam1, tam2,matriz);
		imprimirnumeros(tam1,tam2,matriz);
		
		
		return 0;
}