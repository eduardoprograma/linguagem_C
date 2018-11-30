/*Programa tabuada*/
programa
{
	funcao inicio()
	{
		/*Declara variavel*/
		real num = -1.0, tabuada, resulsoma, resulsub, resulmult, resuldiv
		/*Entrada de daods*/
		escreva("Programa Tabuada\n\n")
		escreva("Digite a Tauada: ")
		leia(tabuada)
		/*Bloco de comando*/
		enquanto(num < 10){
			num++
			resulsoma = num + tabuada
			resulsub = num - tabuada
			resulmult = num * tabuada
			resuldiv = num / tabuada
			/*Saida de dados*/
			escreva(num, " + ", tabuada, " = ", resulsoma, " \t ", num, " - ", tabuada, " = ", resulsub, " \t ", num, " x ", tabuada, " = ", resulmult, " \t ", num, " / ", tabuada, " = ", resuldiv, "\n") 
		}
		/*Fim do codigo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 660; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */