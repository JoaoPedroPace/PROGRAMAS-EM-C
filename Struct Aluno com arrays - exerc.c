#include <stdio.h>
#include <string.h>

/* Crie um programa que:

Use a mesma struct Aluno do exercício anterior, mas agora adicione um vetor para 3 notas (float notas[3]).

Na função main, declare um array que possa armazenar 2 alunos.

Use um laço de repetição (for) para pedir o nome e as 3 notas de cada um dos 2 alunos.

Ao final, use outro laço de repetição para imprimir os dados de todos os alunos que foram cadastrados.
*/

typedef struct{
	char nome[30];
	char matricula[12];
	float notas[3];
	
}Aluno;

static void ler_linha(char*buf, int tam){
	if(fgets(buf, (int)tam, stdin)){
		size_t n = strlen(buf);
		if(n > 0 && buf[n-1] == '\n')
			buf[n-1] = '\0';
	}
}

static void limpa_buffer(){
	int c;
	while((c = getchar()) != '\n' &&  c != EOF){
		
	}
}

int main(){
	Aluno alunos[2];
	
	for(int i = 0; i < 2;i++){
		printf("Escreva o nome do Aluno %d: ", i + 1);
		ler_linha(alunos[i].nome, 30);
		
		printf("Escreva a matricula dele: ");
		ler_linha(alunos[i].matricula, 13);
		
			for(int j =0; j < 3;j++){
				printf("Insira a nota %d do aluno: ", j + 1);
				scanf("%f", &alunos[i].notas[j]);
				limpa_buffer();
			}
	}
	
	printf("\n\n Dados cadastrados : \n");
	for(int i = 0; i < 3;i ++){
		printf("Aluno %d: \n", i + 1);
		printf("\nNome: %s", alunos[i].nome);
		printf("\nMatricula: %s", alunos[i].matricula);
		for(int j = 0; j < 3; j++){
			printf("\nNota: %.2f", alunos[i].notas[j]);
	}
	}
	return 0;
}