/*Programa para aumento*/
programa
{
	funcao inicio()
	{
		/*Declare as var�veis*/
		real A, sal, NSal
		/*Entrada de dados*/
		escreva("Programa de aumento de salario.\n\n")
		escreva("Digite o salario: $")
		leia(sal)
		/*Bloco de comando*/
		/*Sa�da de dados*/
		se(sal <= 300.00){
			A = 0.35
			NSal = sal + (sal * A)
			escreva("O novo salario $", NSal, "\n")
		}
		senao{ 
			A = 0.15
			NSal = sal + (sal * A)
			escreva("O novo salario $", NSal, "\n")
		}
		/*FIM DE C�DIGO*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 397; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */