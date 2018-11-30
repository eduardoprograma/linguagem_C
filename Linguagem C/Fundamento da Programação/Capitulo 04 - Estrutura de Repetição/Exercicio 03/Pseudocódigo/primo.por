/*Programa números primos*/
programa
{
	funcao inicio()
	{
		/*Declaração de variáveis*/
		inteiro N, P = 0, NP = 0, CN = 0, R
		/*Entrada de dados*/
		escreva("Programa Para identificar números Primos.\n\n")
		escreva("Digite um número: ")
		leia(N)
		/*Bloco de comando*/
		se(92 <= N e N <= 1478){
			enquanto(CN < N){
				CN++
				//escreva("\n", CN, "\n\n")
				R = N % CN
				se(R == 0){
					P++
				}
				senao se(R == 1){
					NP++
				}
			}
			/*Fim do código*/
			se(P <= 2 ){
				escreva("O numero e primo.\n\n")
			}
			senao{
				escreva("O numero nao e primo.\n\n")
			}
		}
		senao{
			escreva("Digite um numero entre 92 e 1478.\n\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 337; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */