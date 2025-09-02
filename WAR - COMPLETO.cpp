#include <iostream>
#include <string>
#include <vector>
#include <memory>
#define MAX_TERRITORIOS 3
struct Territorio{
	std::string nome;
	std::string cor;
	int tropas;
	int id;
	
};
	static int id_territorio = 0;//chave primaria pra o ataque entre territorios;
	
//funcoes que vou utilizar
void cadastrarTerritorio(std::vector<std::unique_ptr<Territorio>>& territorios);
void listarTerritorios(std::vector<std::unique_ptr<Territorio>>& territorios);
void atacarTerritorio(std::vector<std::unique_ptr<Territorio>>& territorios);
void localizarTerritorio(std::vector<std::unique_ptr<Territorio>>& territorios);

int main(){
		int resp;
	std::vector<std::unique_ptr<Territorio>> territorios;
do{
		
		std::cout << "\n\n\n ------ MENU ------ \n\n";
		std::cout << "1.Cadastrar territorio. \n";
		std::cout << "2.Listar territorios cadastrados. \n";
		std::cout << "3.Localizar territorio - (Via ID). \n";
		std::cout << "0.Sair.\n";
		std::cin >> resp;
		std::cin.ignore();
		
		switch(resp){
			case 1:
				cadastrarTerritorio(territorios);
				break;
			case 2:
				listarTerritorios(territorios);
				break;
			case 3:
				localizarTerritorio(territorios);
				break;
			case 0:
				std::cout << "\nAperte enter pra sair do programa. ";
				std::cin.get();
				break;
			default:
				std::cout << "\nOpcao incorreta.";
				break;
				
		}
	}while(resp != 0);
	
	return 0;

}

void cadastrarTerritorio(std::vector<std::unique_ptr<Territorio>>& territorios){
	if(territorios.size() >= MAX_TERRITORIOS){
		std::cout << "\nNumero maximo de territorios atingido! ";
	}else{
	auto territorio = std::make_unique<Territorio>();
	int id = id_territorio++;
	id++;
	std::cout << " --- CADASTRO DE TERRITORIOS --- \n\n";
	std::cout << "Insira o nome do territorio: ";
	std::getline(std::cin, territorio->nome);
	
	std::cout << "Insira a cor do territorio: ";
	std::getline(std::cin, territorio->cor);
	
	std::cout << "Insira o numero de tropas: ";
	std::cin >> territorio->tropas;
	
	territorio->id = id;
	territorios.push_back(std::move(territorio));
	
	std::cout << "\n\nTerritorio cadastrado com sucesso! ";
}
}
void listarTerritorios(std::vector<std::unique_ptr<Territorio>>& territorios){
	
	if(territorios.empty()){
		std::cout << "\nSem nenhum territorio cadastrado ainda";
	}else{
	std::cout << "\n\n --- LISTA DE TERRITORIOS --- ";
	for(auto& territorio : territorios){
		std::cout << "\n\nNome : " << territorio->nome;
		std::cout << "\nCor : " << territorio->cor;
		std::cout << "\nNumero de tropas : " << territorio->tropas;
		std::cout << "\nID : " << territorio->id;
		}
	}
}

void atacarTerritorio(std::vector<std::unique_ptr<Territorio>>& territorios){
	
}

void localizarTerritorio(std::vector<std::unique_ptr<Territorio>>& territorios){
	if(territorios.empty()){
		std::cout << "\n\nSem territorios cadastrados";
	}else{
	int id_busca;
	std::cout << "\n\nInsira o ID do territorio a ser procurado: ";
	std::cin >> id_busca;
	std::cin.ignore();
	
	int result = 0;//fazer a verificação se foi encontrado ou nao no vetor e armazenar na variavel
	for(auto& territorio : territorios){
		if(id_busca == territorio->id){
			std::cout << "\nTerritorio encontrado : " << territorio->nome;
			std::cout << "\nID : " << territorio->id;
			std::cout << "\nCor : " << territorio->cor;
			std::cout << "\nTropas : " << territorio->tropas;
			result = 1;
			break;
		}if(result == 0){
			std::cerr << "\n\n Nao foi possivel encontrar o territorio desejado. ";
		}
	}
}
}