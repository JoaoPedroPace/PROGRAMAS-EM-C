#include <stdio.h>
#include <string.h>

/*Modifique sua struct Aluno para incluir um campo float media;.

Crie uma função chamada void calcula_media(struct Aluno *ptr_aluno). O * indica que a função espera um ponteiro.

Dentro dessa nova função, some as notas do aluno, calcule a média e salve o resultado no campo media.

Dica: Para acessar os campos de um struct através de um ponteiro, você usa o operador "seta" -> (ex: ptr_aluno->media).

Na função main, dentro do laço for onde você lê os dados, chame a função calcula_media para cada aluno.

Dica: Para passar o endereço de um aluno para a função, você usa o operador & (ex: calcula_media(&turma[i]);).

Altere o segundo laço for para que ele também imprima a média calculada de cada aluno
*/

typedef struct{
	char nome[30];
	char matricula[12];
	float notas[3];
	float media;
}Aluno;

static void ler_linha(char *buf, int tam){
	if(fgets(buf, (int)tam, stdin)){
		size_t n = strlen(buf);
		if(n > 0 && buf[n-1])
			buf[n-1] = '\0';
	}
}

static void limpa_buffer(){
	int c;
	while((c = getchar()) != '\n' && c != EOF){
		
	}
}

void calcula_media(Aluno *ptr_aluno){
	float soma_notas = 0;
	for(int i = 0; i < 3; i++){
		soma_notas += ptr_aluno->notas[i];
	
}
		ptr_aluno->media = soma_notas/3;

}

int main(){
	Aluno turma[2];
	
	for(int i = 0; i < 2;i++){
		printf("Escreva o nome do Aluno %d: ", i + 1);
		ler_linha(turma[i].nome, 30);
		
		printf("Escreva a matricula dele: ");
		ler_linha(turma[i].matricula, 13);
		
			for(int j =0; j < 3;j++){
				printf("Insira a nota %d do aluno: ", j + 1);
				scanf("%f", &turma[i].notas[j]);
				limpa_buffer();
			}
		calcula_media(&turma[i]);
	}
	
	printf("\n\n---- Dados cadastrados ----\n\n");
	for(int i =0; i < 2; i ++){
		printf("\nAluno %d: \n", i + 1);
		printf("\nNome: %s", turma[i].nome);
		printf("\nMatricula: %s", turma[i].matricula);
		printf("\nMedia: %.2f", turma[i].media);
		
	}
	return 0;
	
}