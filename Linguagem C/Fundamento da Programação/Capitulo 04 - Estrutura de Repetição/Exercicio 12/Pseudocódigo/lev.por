/*Programa para calculo relacionados a pessoa*/
programa
{
	funcao inicio()
	{
		/*Declaração de variáveis*/
		inteiro idade, cont, cont50 = 0, cont20 = 0
		real altura, peso, percentagem = 0.0, altura20 = 0.0
		real pesoM = 0.0, pesom = 0.0
		/*Entrada de dados*/
		escreva("Programa controle de Saúde.\n\n")
		escreva("Digite a idade: ")
		leia(idade)
		/*Bloco de comando*/
		para(cont = 1; cont <= 25; cont++){
			escreva("Digite a altura: ")
			leia(altura)
			escreva("Digite se peso: ")
			leia(peso)
			se(idade >= 50){
				cont50++
			}
			senao se(idade >= 10 e idade <= 20){
				cont20++
				altura20 += altura
			}
			se(peso <= 40 e peso >= 35){
				pesoM = peso
			}
			senao se(peso >= 20 e peso <=34) {
				pesom = peso
			}
			escreva("Digite a idade: ")
			leia(idade)
		}
		/*Saída de dados*/
		escreva("\nA quantidade de pessoas acima da idade de 50 anos : ", cont50, " pessoas.\n\n")
		escreva("A media da altura entre pessoas de 10 a 20 anos : ", altura20 /cont20, "m\n\n")
		percentagem = ((pesoM - pesom) * 100) / pesoM
		escreva("A percentagem em pessoas com peso inferior a 40Kg: ", percentagem, "%\n\n")
		/*Fim de código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 775; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */