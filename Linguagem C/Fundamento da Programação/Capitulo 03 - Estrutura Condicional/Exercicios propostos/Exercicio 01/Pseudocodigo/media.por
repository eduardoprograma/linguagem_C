/*Programa media*/
programa
{
	funcao inicio()
	{
		/*Declara��o de variaveis*/
		real n = 0.0, nt = 0.0, c = 0.0, media = 0.0
		/*Entrada de variaveis*/
		escreva("Programa para calculo de 4 notas = media\n\n")
		escreva("Digite a primerira nota: ")
		leia(n)
		/*Bloco de comando*/
		enquanto(c < 3){
			c++
			nt += n
			escreva("Digite uma nota: ")
			leia(n)
			}
			media = nt / c
		/*Saida de variaveis*/
		escreva("A media e ", media, "\n\n")
		se(media < 7){
			escreva("Reprovado!!!\n\n")
			}
		senao{
			escreva("Aprovado!!!\n\n")
			}
		/*FIM DO C�DIGO*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 463; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */