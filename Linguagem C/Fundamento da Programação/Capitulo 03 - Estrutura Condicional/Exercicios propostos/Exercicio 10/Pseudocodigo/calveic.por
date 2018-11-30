/*Programa compra de automovel*/
programa
{
	funcao inicio()
	{
		/*Declare a variavel*/
		/*CF = Custo de fabrica
		  PD = Porcentagem da distribuidora
		  I = Imposto
		  PI = Preço com taxas da distribuidora
		  II = Precço com imposto
		  PC = Preço final consumidor*/
		real CF, PD, I, PI, II, PC
		/*Entrada de dados*/
		escreva("Programa que calcula preço final do veiculo.n\n")
		escreva("Entre com o valor do veiculo: $")
		leia(CF)
		/*Bloco de comandos*/
		se(CF <= 12000.00){
			PD = 0.05
			I = 0.00
			PI = CF + (CF * PD)
			II = CF * I
			PC = PI + II
		}
		senao se(CF >12000.00 e CF <= 25000.00){
			PD = 0.10
			I = 0.15
			PI = CF + (CF * PD)
			II = CF * I
			PC = PI + II
		}
		senao{
			PD = 0.15
			I = 0.20
			PI = CF + (CF * PD)
			II = CF * I
			PC = PI + II
		}
		/*Saída de dados*/
		escreva("O valor do seu veiculo é $", PC, "\n")
		/*Fim de código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 768; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */