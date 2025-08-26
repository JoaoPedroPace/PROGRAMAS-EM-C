#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//constantes globais! 
#define MAX_LIVROS 50
#define MAX_STRING 100

typedef struct{
	char nome[MAX_STRING];
	char autor[MAX_STRING];
	char editora[MAX_STRING];
	int edicao;
}Livro;

//protótipo das funções:
void cadastrar_livro(Livro *biblioteca);
void listar_livros(Livro *biblioteca);
void exibirMenu();

int main(){
	int resp;//armazenar resposta do menu
	exibirMenu();
	scanf("%d", &resp);
	getchar();
	
	switch(resp){
		case 1:
			cadastrar_livro();
			break;
			
		case 2:
			listar_livros();
			break;
		case 0:
			printf("Programa finalizado! Pressione qualquer tecla pra sair. ");
			getchar();
			break;
		default:
			printf("Opção nao reconhecida, resete o programa! ");
			
	}
	
	
}

void cadastrar_livro(Livro *biblioteca){
	Livro *biblioteca[];
	for(int i =0;i < MAX_LIVROS;i++){
		printf("Insira o nome do livro: ");
		fgets(livro[i].nome,MAX_STRING,stdin);
	}
}

void listar_livros(Livro *biblioteca){
	for(int i =0; i < biblioteca;i++){
		printf("Nome: %s",biblioteca[i].nome);
	}
}

void exibirMenu(){
	printf(" --- Escolha uma opcao --- \n");
	printf("1. Cadastrar livro. ");
	printf("2. Listar livros. ");
	printf("0. Sair. \n");
	
}