#include <iostream>
#include <vector>
#include <string>
#define MAX_BIBLIOTECA 50 //TAMANHO MAXIMO DA BIBLIOTECA

//struct livro
typedef struct{
	std::string nome;
	std::string editora;
	int edicao;	
}Livro;

std::vector<Livro> biblioteca;//vector pra armazenar os livros cadastrados e depois poder acessá-los. Declarado de forma global;


//funçoes usadas: 
void cadastrarLivro();
void listarLivros();

int main(){
		biblioteca.reserve(MAX_BIBLIOTECA);
		int resp;
	do{
		
		std::cout << "\n ------ MENU ------ \n\n";
		std::cout << "1.Cadastrar livro. \n";
		std::cout << "2.Listar livros cadastrados. \n";
		std::cout << "0.Sair. \n\n";
		std::cin >> resp;
		std::cin.ignore();
		
		switch(resp){
			case 1:
				cadastrarLivro();
				break;
			case 2:
				listarLivros();
				break;
			case 0:
				std::cout << "Aperte qualquer tecla pra sair do programa. ";
				std::cin.ignore();
				std::cin.get();
				break;
			default:
				std::cout << "Opcao incorreta.";
				break;
				
		}
	}while(resp != 0);
	
	return 0;
}


void cadastrarLivro(){
	if(biblioteca.size() >= MAX_BIBLIOTECA){
		std::cout << "Limite de livros cadastrados atingido! \n";
		std::cout << "Aperte qualquer tecla pra finalizar o programa! ";
		getchar();
	}
	
	Livro livro;
	
	std::cout << "\nInsira o nome do livro: ";
	std::getline(std::cin, livro.nome);
	
	std::cout << "Insira a editora do livro: ";
	std::getline(std::cin, livro.editora);
	
	std::cout << "Insira a edicao dele: ";
	std::cin >> livro.edicao;
	
	biblioteca.push_back(livro);
	
	std::cout << "\n\nLivro cadastrado com sucesso! ";
	
}

void listarLivros(){
	if(biblioteca.empty()){
		std::cout << "\n Nenhum livro cadastrado ainda... \n";
	}else{
	std::cout << "\n ------ Lista de livros ------ \n\n";
	for(Livro livro : biblioteca){
		std::cout << "Nome do livro: " << livro.nome;
		std::cout << "\nEditora do livro: " << livro.editora;
		std::cout << "\nEdicao do livro: " << livro.edicao;
		std::cout << "\n -\n";
	}
}
}