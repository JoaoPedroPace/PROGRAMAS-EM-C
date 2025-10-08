#include <stdio.h>
#include <string.h>

/*Defina uma struct chamada Aluno para guardar o nome (com até 50 caracteres) e a matrícula (um número inteiro) de um único aluno.

Na função main, declare uma variável do tipo struct Aluno.

Peça para o usuário digitar o nome e a matrícula.

Guarde esses dados na sua variável.

Ao final, imprima os dados que foram lidos.
 
*/
 
 typedef struct{
 	char nome[30];
 	char matricula[15];
 	float notas[3];
 	float media;
 }Aluno;
 
 static void ler_linha(char *buf, int tam){
 	if(fgets(buf, (int)tam,stdin)){
 		size_t n = strlen(buf);
 		if(n && buf[n-1] == '\n')
 			buf[n-1] = '\0';
	 }
 }
 
 static void limpa_buffer(){
 	int c;
 	while((c = getchar()) != '\n' && c != EOF){
	 }
 }
 
 int main(){
 	Aluno aluno;
	float soma_notas = 0;
	 printf("Escreva o nome do aluno: ");
	 ler_linha(aluno.nome, 30);
	 printf("\nEscreva as 3 notas dele: ");
	 	for(int i = 0; i < 3; i++){
	 		float nota;
	 		printf("\nNota %d: ", i + 1);
	 			scanf("%f", &nota);
	 			soma_notas += nota;
	 			aluno.notas[i] = nota;
	 			limpa_buffer();
		 }
	limpa_buffer();
	printf("Insira a matricula dele: ");
	ler_linha(aluno.matricula, 15);	
	
	aluno.media = soma_notas/3;
	
	
	printf("Dados do aluno: ");
	printf("\n\nNome: %s", aluno.nome);
	printf("\nMedia: %.1f", aluno.media);
	printf("\nMatricula: %s", aluno.matricula);
	
	return 0;
 }