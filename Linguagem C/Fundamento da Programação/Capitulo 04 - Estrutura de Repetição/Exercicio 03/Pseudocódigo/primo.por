/*Programa n�meros primos*/
programa
{
	funcao inicio()
	{
		/*Declara��o de vari�veis*/
		inteiro N, P = 0, NP = 0, CN = 0, R
		/*Entrada de dados*/
		escreva("Programa Para identificar n�meros Primos.\n\n")
		escreva("Digite um n�mero: ")
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
			/*Fim do c�digo*/
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
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 337; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */