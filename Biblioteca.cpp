#include <iostream>
#include <string>
#include <vector>
//nome,autor,editora,edicao
typedef struct{
    std::string nome;
    std::string autor;
    std::string editora;
    int edicao;
}Livro;

int main(){
    std::vector <Livro> biblioteca;
    int resp;
    int i = 0;
    do{
        std::cout << "\n--- MENU --- \n";
        std::cout << "1. Cadastrar livro. \n";
        std::cout << "2. Listar livros cadastrados. \n";
        std::cout << "0. Sair.\n";
        std::cin >> resp;
        std::cin.ignore();

        switch(resp){

            case 1:{
			
                Livro livro;
                std::cout << " --- Cadastrando livro --- \n";
                std::cout << " Insira o nome do livro: ";
                std::getline(std::cin, livro.nome);

                std::cout << " Insira o autor do livro: ";
                std::getline(std::cin, livro.autor);

                std::cout << " Insira a editora do livro: ";
                std::getline(std::cin, livro.editora);

                std::cout << " Insira a edicao do livro: ";
                std::cin >> livro.edicao;
                std::cin.ignore();

                biblioteca.push_back(livro);
                
                std::cout << "\nLivro cadastrado com sucesso! \n";
                break;
			}
            case 2: 
                if(biblioteca.empty()){
                    std::cout << "\nSem livros na biblioteca até o momento! ";
                } else {
                    for(Livro livro : biblioteca){
                        std::cout << "\nLivro N-" << biblioteca.size();
                        std::cout << "\nNome: " << livro.nome;
                        std::cout << " \nAutor: " << livro.autor;
                        std::cout << " \nEditora: " << livro.editora;
                        std::cout << " \nEdicao: " << livro.edicao << std::endl;
                        
                    }
                }
                break;
            
            case 0: 
                std::cout << "Programa finalizado! ";
                break;
            
            default: 
                std::cout << "Rapaz...deu alguma merda aí! ";
                break;
        }
    }while(resp !=0);
    return 0;
}
