/*Programa de numero 13 Capitulo 4*/
programa
{
	funcao inicio()
	{
		/*Declara��o das var�veis*/
		inteiro idade, cont = 1, cont90 = 0, media, idadeS = 0
		real peso
		/*Entrada de dados*/
		/*Bloco de comandos*/
		para( ; cont <= 7; cont++){
			escreva("Digite a idade: ")
			leia(idade)
			escreva("Digite o peso: ")
			leia(peso)
			idadeS += idade
			se(peso >= 90){
				cont90++
			}
			senao{
				/*N�o fa�a nada*/
			}
		}
		/*Sa�da de dados*/
		media = idadeS / cont
		escreva("\nQuantidade de pessoas que est�o acima de 90kg: ", cont90)
		escreva("\nA media da idade das pessoas : ", media, "\n\n")
		/*Fim do c�digo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 608; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */