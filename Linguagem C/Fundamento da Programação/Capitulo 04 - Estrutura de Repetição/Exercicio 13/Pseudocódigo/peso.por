/*Programa de numero 13 Capitulo 4*/
programa
{
	funcao inicio()
	{
		/*Declaração das varáveis*/
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
				/*Não faça nada*/
			}
		}
		/*Saída de dados*/
		media = idadeS / cont
		escreva("\nQuantidade de pessoas que estão acima de 90kg: ", cont90)
		escreva("\nA media da idade das pessoas : ", media, "\n\n")
		/*Fim do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 608; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */