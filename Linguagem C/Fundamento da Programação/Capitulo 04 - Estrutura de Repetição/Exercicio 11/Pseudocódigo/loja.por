/*Programa de uma loja*/
programa
{
	funcao inicio()
	{
		/*Declaração de variáveis*/
		cadeia cod = ""
		real VTV, VTP, VTE = 0, VPP, Valor
		inteiro cont
		/*Entrada de dados*/
		escreva("Programa Loja.\n\n")
		escreva("Digite o valor: $")
		leia(Valor)
		escreva("Digite o codigo : ")
		leia(cod)
		/*Bloco de comandos*/
		para(cont = 1; cont <= 15; cont++){
			se(cod == "V"){
				VTV = Valor
				VTE += VTV
				escreva("O valor a pagar $", Valor, "\n")
			}
			senao se(cod == "P"){
				VTP = Valor + (Valor * 0.15)
				VTE += VTP
				VPP = VTP / 3
				escreva("O valor a prazo: $", VTP, "\n")
				escreva("Dividido em 3 prestacoes de : $", VPP, "\n")
			}
			senao{
			escreva("Digite uma opcao valida.\n")
			escreva("Digite V = avista e P = a prezo: ")
			leia(cod)
			}
			escreva("Digite o valor: $")
			leia(Valor)
			escreva("Digite o codigo : ")
			leia(cod)
		}
		/*Saída de dados*/ 
		escreva("Saldo do dia.\n\n")
		escreva("Saldo de compras efetuadas : $", VTE, "\n")
		/*Fim do codigo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 871; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */