/*Programa Peso*/
programa
{
	funcao inicio()
	{
		/*Declare as variaveis*/
		real peso, gorda, magra
		/*Entre com o valor das variaveis*/
		escreva("Bem vidoao programa Peso.\n\n")
		escreva("Digite o valor do seu peso:")
		leia(peso)
		/*Bloco de comando*/
		gorda = peso + (peso * 0.15)
		magra = peso - (peso * 0.20)
		/*Saida das variaveis*/
		escreva("\nSe voce emagrecer o peso sera ", magra, "kg\n\n")
		escreva("Se voce engordar o peso sera ", gorda, "kg\n\n")
		/*fim do codigo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 361; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */