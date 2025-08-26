#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    char cor[50];
    int tropas;
} Territorio;


int main(){
	int num_territorios;
	printf("\nQuantos territorios quer cadastrar? ");
	scanf("%d", &num_territorios);
	getchar();
	
	Territorio* territorios = (Territorio*) malloc(num_territorios * sizeof(Territorio));
	
	if(territorios == NULL){
		printf("\n\n Erro ao alocar memória! ");
		return 1;
	}
	
	for(int i = 0; i < num_territorios;i++){
	
	printf("\n\n --- Cadastro de territorios --- \n\n");
	printf("\n Insira o nome do territorio a ser cadastrado: ");
	fgets(territorios[i].nome, 50, stdin);
	
	printf(" Insira a cor do territorio: ");
	fgets(territorios[i].cor, 50, stdin);
	
	printf(" Insira o numero de tropas do territorio: ");
	scanf("%d", &territorios[i].tropas);
	getchar();
	
	printf("\n\n Territorio cadastrado com sucesso! ");
}	
	printf("\n\n --- Exibindo territorios --- \n\n");
	for(int i = 0; i < num_territorios; i++){
        printf("\nNome: %sCor: %sTropas: %d\n", territorios[i].nome, territorios[i].cor, territorios[i].tropas);
    
}
	free(territorios);
	return 0;
	
}
