/*Programa Exercicio - 1 / Estrutura de Repeti��o*/
programa
{
	funcao inicio()
	{
		/*Declara��o das var�veis*/
		inteiro N = 1000, R = 0, p = 0, n = 0, cinco=0, ncinco = 0
		enquanto(N >= 1000 e N < 2000){
			N++
			se(1000 < N e N <= 2000){
				p++
				R = N % 11
			}
			senao{
				n++
				escreva("Digite um n�mero v�lido.\n\n")
			}
			/*Sa�da de dados*/
			se(R == 5){
				cinco++
				escreva("O resto do n�mero e ", R, "\n\n")
			}
			senao{
				ncinco++
				escreva("Este n�mero n�o tem resto = 5\n")
				escreva("Tente novamente.\n\n")
			}
			/*Entrada de dados*/
			//escreva("Digite o numero: ")
			//leia(N)
		}
		/*Sa�da de dados*/
		escreva("Numero de a��es positivas: ", p, "\n")
		escreva("Numero de a��es negativas: ", n, "\n")
		escreva("Numero de vezes que o modulo 5 aparece: ", cinco, "\n")
		escreva("Numero de vezes que o modulo 5 aparece: ", ncinco, "\n")
		/*Fim de comando*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 881; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */