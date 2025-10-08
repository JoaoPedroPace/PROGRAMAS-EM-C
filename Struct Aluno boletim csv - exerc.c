/*Em C, para trabalhar com arquivos, seguimos 3 passos básicos:

Abrir o arquivo: Usamos a função fopen() e dizemos o nome do arquivo e o que queremos fazer com ele ("w" para write, ou escrever). Isso nos dá um "ponteiro de arquivo" (FILE*).

Escrever no arquivo: Usamos a função fprintf(), que funciona exatamente como o printf, mas em vez de escrever na tela, escreve no arquivo.

Fechar o arquivo: Usamos a função fclose() para garantir que tudo foi salvo corretamente. É muito importante nunca se esquecer de fechar o arquivo!

Seu quarto exercício:

Aproveite o código do Passo 3.

Crie uma nova função, por exemplo, void salvar_alunos(struct Aluno turma[], int total_de_alunos).

Dentro dessa função, abra (ou crie) um arquivo chamado boletim.csv em modo de escrita ("w").

Importante: Sempre verifique se o arquivo foi aberto com sucesso. Se fopen retornar NULL, significa que deu erro. Nesse caso, exiba uma mensagem de erro.

Use um laço de repetição (for) para percorrer o array de alunos.

Dentro do laço, use fprintf para escrever os dados de cada aluno no arquivo, separados por ponto e vírgula, e com uma quebra de linha \n no final. O formato deve ser: nome;nota1;nota2;nota3;media\n.

Após o laço, feche o arquivo com fclose.

Na função main, depois de imprimir todos os alunos na tela, chame a sua nova função salvar_alunos.

Depois de rodar o programa, um novo arquivo chamado boletim.csv deve aparecer na mesma pasta do seu executável! 
*/

#include <stdio.h>
#include <string.h>
#define TAM_TURMA 2

typedef struct{
	char nome[30];
	char matricula[12];
	float notas[3];
	float media;
}Aluno;

void salvar_alunos(Aluno turma[]);//salvar alunos em arquivo .csv
static void ler_linha(char *buf, int tam);//ler linha de caracteres e tratar os \n no final de cada entrada.
static void limpa_buffer();
void calcula_media(Aluno *ptr_aluno);//calcular media do aluno via ponteiro.
void ler_alunos();



void salvar_alunos(Aluno turma[]){
	FILE  *arquivo;
	arquivo = fopen("dados_aluno.csv", "w");
	if(arquivo == NULL){
		perror("\n\nErro ao salvar arquivo csv! \n");
	}
	
	for(int i = 0; i < TAM_TURMA; i++){
		fprintf(arquivo, "%s;", turma[i].nome);
			for(int j = 0 ; j < 3; j++){
				fprintf(arquivo, "%.2f;", turma[i].notas[j]);
			}
		
		fprintf(arquivo, "%.2f\n", turma[i].media);
		
	}
	fclose(arquivo);
	printf("\nDados gravados com sucesso! ");
}

void ler_alunos(){
	FILE *arquivo;
	arquivo = fopen("dados_aluno.csv", "r");
	if(arquivo == NULL){
		perror("\nErro ao abrir arquivo pra leitura.\n ");
	}
	
	char linha[100];
	printf("\n\n ---- Dados dos alunos (NOME;NOTAS;MEDIA): \n\n");
	while(fgets(linha,sizeof linha, arquivo)){
		printf("%s", linha);
	}
	fclose(arquivo);
}
static void ler_linha(char *buf, int tam){
	if(fgets(buf, (int)tam, stdin)){
		size_t n = strlen(buf);
		if(n > 0 && buf [n-1] == '\n')
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
	Aluno turma[TAM_TURMA];
	
	for(int i = 0; i < TAM_TURMA;i++){
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
	for(int i =0; i < TAM_TURMA; i ++){
		printf("\nAluno %d: \n", i + 1);
		printf("\nNome: %s", turma[i].nome);
		printf("\nMatricula: %s", turma[i].matricula);
		printf("\nMedia: %.2f", turma[i].media);
		
	}
	
	salvar_alunos(turma);
	ler_alunos();
	return 0;
}
	