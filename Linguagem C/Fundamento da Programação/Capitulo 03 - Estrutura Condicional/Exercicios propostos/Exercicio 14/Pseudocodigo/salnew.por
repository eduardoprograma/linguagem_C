/*Programa para calculo de novo salario*/
programa
{
	funcao inicio()
	{
		/*Declare as variáveis*/
		/*sal = Salário;
		  A = Procentagem;
		  salN = Novo salário;*/
		real sal, A, salN
		/*Entrada de variáveis*/
		escreva("Programa para calculo de novo salario.\n\n")
		escreva("Digite o salario para saber se podemos altera-lo: $")
		leia(sal) 
		/*Bloco de comando*/
		se(sal <= 300){					//Salarios divididos por faixas
			A = 0.50
			salN = sal + (sal * A)
		}
		se(sal > 300 e sal <= 500){
			A = 0.40
			salN = sal + (sal * A)
		}
		se(sal > 500 e sal <= 700){
			A = 0.30
			salN = sal + (sal * A)
		}
		se(sal > 700 e sal <= 800){
			A = 0.20
			salN = sal + (sal * A)
		}
		se(sal > 800 e sal <= 1000){
			A = 0.10
			salN = sal + (sal * A)
		}
		senao{
			A = 0.05
			salN = sal + (sal * A)
		}
		/*Saída de variáveis*/
		escreva("Novo salario $", salN, "\n\n") //Saída do novo valor de salario
		/*Fim do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 682; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */