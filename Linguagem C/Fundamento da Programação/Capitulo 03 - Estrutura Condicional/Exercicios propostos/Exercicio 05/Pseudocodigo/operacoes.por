/*Programa chave*/
programa
{
	funcao inicio()
	{
		/*Declare as variáveis*/
		real n1, n2, O
		inteiro NC
		/*Entrada de dados*/
		escreva("Programa Chaves\n\n")
		escreva("Digite um numero: ")
		leia(n1)
		escreva("Digite um numero: ")
		leia(n2)
		escreva("Escolha uma opção:\n\n")
		escreva("1 - Média\n")
		escreva("2 - Diferença\n")
		escreva("3 - Produto\n")
		escreva("4 - Divisão\n")
		escreva("Escolha... Digite agora a opção: ")
		leia(NC)
		/*Bloco de comando*/
		/*Saíada de dados*/
		escolha(NC){
			caso 1:
			O = (n1 + n2) / 2
			escreva("A média entre os dois numeros é ", O, "\n")
			pare
			caso 2:
				se(n1 > n2){
					O = n1 - n2
					escreva(" A difrença entre os números é ", O, "\n")
				}
				senao{
					O = n2 - n1
					escreva(" A difrença entre os números é ", O, "\n")
				}
			pare
			caso 3:
			O = n1 * n2
			escreva("O produto dos dois números é ", O, "\n")
			pare
			caso 4:
			O = n1 /n2
			escreva("A divisão do dois números é ", O, "\n")
			pare
		}
		/*Fim do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 412; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */