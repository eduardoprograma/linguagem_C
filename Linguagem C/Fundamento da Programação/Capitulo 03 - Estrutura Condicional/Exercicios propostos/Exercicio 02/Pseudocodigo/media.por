/*Programa Media*/
programa
{
	funcao inicio()
	{
		/*Declara��o de vari�veis*/
		real n = 0.0, nt = 0.0, media, c = 0.0
		/*Entrada de dados*/
		/*Bloco de comandos*/
		enquanto(c < 2){
			escreva("Digite a segunda nota: ")
			leia(n)
			c++
			nt += n
		}
		media = nt / c
		/*Sa�da de variaveis*/
		escreva("A media do aluno e ", media, "\n\n")
		se(media < 4){
			escreva("Aluno REPROVADO!!!\n\n")
		}
		senao se(media >= 4 e media < 7){
			escreva("Aluno de exame...\n\n")
		}
		senao{
			escreva("Aluno APROVADO!!!")
		}
		/*Fim do codigo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 435; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */