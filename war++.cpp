#include <iostream>
#include <string>
#include <vector>
#define MAX_TAM 5
typedef struct{
	std::string nome;
	std::string cor;
	int tropas;
}Territorio;

int main(){
	std::vector <Territorio> territorios;
	int i;
	for(int i = 0; i < MAX_TAM;i++){
	Territorio territorio;
	std::cout << "\n\n\n ---- Cadastrando territorio ---- \n\n\n";
	std::cout << "Insira o nome do territorio a ser cadastrado: ";
	std::getline(std::cin, territorio.nome);
	
	std::cout << "Insira a cor do territorio: ";
	std::getline(std::cin, territorio.cor);
	
	std::cout << "Insira a quantidade de tropas dele: ";
	std::cin >> territorio.tropas;
	std::cin.ignore();
	
	territorios.push_back(territorio);
	
	if(!territorios.empty()){
		std::cout << "\n\nTerritorio adicionado com sucesso! ";
	}else{
		std::cout << "\n";
	}
	
}
	std::cout << "\n\nExibindo territorios: ";
	for(Territorio territorio : territorios){
		i++;
		std::cout << "\n\nTerritorio " << i;
		std::cout << "\nNome do territorio: " << territorio.nome;
		std::cout << "\nCor do territorio: " << territorio.cor;
		std::cout << "\nQuantidade de tropas do territorio: " << territorio.tropas;
		std::cout << "\n\n";
	}
}