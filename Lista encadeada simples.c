#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int dado;
	struct No* proximo; // aponta pra o proximo item da lista encadeada
}No;

int main(){

	No *no1 = (No*)malloc(sizeof(No));
	No *no2 = (No*)malloc(sizeof(No));
	No *no3 = (No*)malloc(sizeof(No));

	no1->dado = 10;
	no2->dado = 20;
	no3->dado = 30;
	
	no1->proximo = no2;
	no2->proximo = no3;
	no3->proximo = NULL;
	
	No *atual = no1;
	while(atual != NULL){
		
		printf("%d", atual->dado);
		atual = atual->proximo;
	}
	int alvo = 10;
	
	
	atual = no1;
	
	while(atual != NULL){
		if(atual->dado == alvo){
			printf(" %d ", atual->dado);
			break;
		}else{
			atual = atual->proximo;
		}
	}
	
	free(no1);
	free(no2);
	free(no3);
	return 0;
}

