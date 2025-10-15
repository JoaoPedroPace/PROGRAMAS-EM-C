#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MOCHILA 10

typedef struct{
    char nome[30];
    int quantidade;
    int id;
} Item;

void inserir_vetor(Item mochila[], int *total_itens);
void listar_vetor(Item mochila[], int total_itens);
void limpa_buffer();
void ler_linha(char *buf, int tam);
void buscar_vetor(Item mochila[], int total_itens, char *nome);

int main(){
    int total_itens = 0;
    int resp = 0;
    
    Item mochila[TAM_MOCHILA];
    
    do{
        printf("\n--- MENU ---\n");
        printf("1. Criar item\n");
        printf("2. Listar itens\n");
        printf("3. Buscar item por nome\n"); // <-- Adicionado
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        
        scanf("%d", &resp);
        limpa_buffer();
        
        switch(resp){
            case 1:
                inserir_vetor(mochila, &total_itens);
                break;
            case 2:
                listar_vetor(mochila, total_itens);
                break;
            case 3: {
                char nome[30];
                printf("\nDigite o nome do produto: ");
                ler_linha(nome, 30); // <-- Ler corretamente strings
                buscar_vetor(mochila, total_itens, nome);
                break;
            }
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(resp != 0);
    
    return 0;
}

void limpa_buffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

void ler_linha(char *buf, int tam){
    if(fgets(buf, tam, stdin)){
        size_t n = strlen(buf);
        if(n > 0 && buf[n-1] == '\n')
            buf[n-1] = '\0';
    }
}

void buscar_vetor(Item mochila[], int total_itens, char *nome) {
    int achou = 0;

    for (int i = 0; i < total_itens; i++) {
        if (strcmp(mochila[i].nome, nome) == 0) {
            printf("\n--- ITEM ENCONTRADO ---\n");
            printf("Nome: %s\n", mochila[i].nome);
            printf("Quantidade: %d\n", mochila[i].quantidade);
            printf("ID: %d\n", mochila[i].id);
            achou = 1;
            break;
        }
    }

    if (!achou) {
        printf("\nNada foi achado com esse nome!\n");
    }
}

void inserir_vetor(Item mochila[], int *total_itens){
    Item novo_item;
    
    if(*total_itens < TAM_MOCHILA){
        printf("\nInsira o nome do item: ");
        ler_linha(novo_item.nome, 30);
        
        printf("Insira a quantidade: ");
        scanf("%d", &novo_item.quantidade);
        limpa_buffer();
        
        novo_item.id = *total_itens + 1;
        
        mochila[*total_itens] = novo_item;
        (*total_itens)++;
        
        printf("\nItem adicionado com sucesso!\n");
    } else {
        printf("\nMochila cheia! Nao e possivel adicionar mais itens.\n");
    }
}

void listar_vetor(Item mochila[], int total_itens){
    if(total_itens == 0){
        printf("\nMochila vazia!\n");
        return;
    }
    
    printf("\n\n---- LISTA DE ITENS ----\n");
    for(int i = 0; i < total_itens; i++){
        printf("\n--- Item %d ---\n", i + 1);
        printf("ID: %d\n", mochila[i].id);
        printf("Nome: %s\n", mochila[i].nome);
        printf("Quantidade: %d\n", mochila[i].quantidade);
    }
    printf("\nTotal de itens: %d/%d\n", total_itens, TAM_MOCHILA);
}
