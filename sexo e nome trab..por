programa
{
	
	funcao inicio()
	{
		inteiro a
		cadeia nome, sexo
		

		escreva("Escreva seu nome:")
		leia(nome)

		escreva("Qual seu sexo? F/M?")
		leia(sexo)

		se (sexo == "F") {
		escreva("Olá", nome, "você é mulher.")
		}
		senao {
		escreva("Olá", nome, "você é homem.")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 64; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */