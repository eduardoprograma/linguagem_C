/*Programa que mostra a quantidade de pessoas de maior idade*/
programa
{
	funcao inicio()
	{
		/*Declaração das variáveis*/
		inteiro idade, cont, contgM = 0
		cadeia grupo = ""
		/*Entrada de dados*/
		escreva("Programa para clasificação de maior idade.\n\n")
		escreva("Digite a idade: ")
		leia(idade)
		/*Bloco de comando*/
		para(cont = 1; cont <= 10; cont++){
			se(idade >= 18){
				grupo = "Maior idade"
				contgM++
			}
			senao{
				escreva("Os menores neste programa são ignorados\n")
			}
			escreva("Digite a idade: ")
			leia(idade)
		}
		/*Saída de dados*/
		escreva("                         tabela        \n")
		escreva("Quantidade de pessoas ", contgM, " Maior de 18 anos\n")
		/*Fim do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 495; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */