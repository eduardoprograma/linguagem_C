/*Programa Calculo de peso*/
programa
{
	funcao inicio()
	{
		/*Declaração de variáveis*/
		real peso = 0.0, h
		cadeia sexo = ""
		/*Entrada de dados*/
		escreva("Programa 'Peso leve'.\nDigite:\nMasculino\nFeminino\n\n")
		escreva("Digite o sua altura: ")
		leia(h)
		escreva("Digite o sexo: ")
		leia(sexo)
		/*Bloco de comando*/
		se(sexo == "Masculino"){
			peso = (72.7 * h) - 58
		}
		senao{
			sexo = "Feminino"
			peso = (62.1 * h) - 44.7
		}
		/*Saída de dados*/
		escreva("Sendo voce do sexo ", sexo, " e com altura de ", h, " o seu peso deve ser ", peso, " kg\n\n")
		/*FIM DO CÓDIGO*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 599; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */