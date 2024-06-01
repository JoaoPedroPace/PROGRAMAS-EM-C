#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *texto;
	char ch;
	texto = fopen("C:\\Users\\USER\\Desktop\\trabalhozao.txt", "r");
	
	if(texto == NULL){
		perror("Nao foi possivel abrir o arquivo. ");
		return EXIT_FAILURE;
	}
	while((ch = fgetc(texto)) != EOF){
		putchar(ch);
	}
	return EXIT_SUCCESS;
}