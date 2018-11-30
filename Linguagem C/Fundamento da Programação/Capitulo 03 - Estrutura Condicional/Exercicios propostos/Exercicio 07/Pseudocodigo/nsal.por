/*Programa para aumento*/
programa
{
	funcao inicio()
	{
		/*Declare as varáveis*/
		real A = 0.30, sal, NSal
		/*Entrada de dados*/
		escreva("Programa de aumento de salario.\n\n")
		escreva("Digite o salario: $")
		leia(sal)
		/*Bloco de comando*/
		/*Saída de dados*/
		se(sal <= 500.00){
			NSal = sal + (sal * A)
			escreva("O novo salario $", NSal, "\n")
		}
		senao{
			escreva("Aumento não se aplica.\n")
		}
		/*FIM DE CÓDIGO*/
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