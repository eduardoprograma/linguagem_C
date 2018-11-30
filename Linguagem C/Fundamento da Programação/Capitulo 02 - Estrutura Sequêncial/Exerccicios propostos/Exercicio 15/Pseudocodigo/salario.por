/*Programa para calcular quanto sobra do salario de joao*/
programa
{
	funcao inicio()
	{
		/*Declarar variaveis*/
		real salario, conta, vConta = 0.0, contaTotal = 0.0, sobra
		/*Entrada de dados*/
		escreva("Programa para saer quanto sobra do salario\n\n")
		escreva("Digite o salario recebido: $")
		leia(salario)
		/*Bloco de comando*/
		enquanto(vConta != -1){
			conta = vConta - (vConta * 0.02)
			contaTotal += conta
			escreva("Digite o valor da conta a ser paga: $")
			leia(vConta)
		}
		/*Saida de dados*/
		sobra = salario - contaTotal
		escreva("O salario que vai sobrar ao final e $", sobra)
		/*Fim do programa*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 548; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */