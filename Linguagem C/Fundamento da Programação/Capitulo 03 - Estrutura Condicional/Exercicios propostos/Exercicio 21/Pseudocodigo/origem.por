/*Programa código de Origem*/
programa
{
	funcao inicio()
	{
		/*Declaração das varáveis*/
		inteiro cod	//codigo do produto para determinar sua origem
		real prec		//Preço do produto
		cadeia city = ""	//Nome das regiões
		/*Entrada de dados*/
		escreva("Programa ORIGENS.\n\n")
		escreva("Digite o valor: $")
		leia(prec)
		escreva("Digite o código: ")
		leia(cod)
		/*Bloco de comando*/
		escreva("\n\n")
		se(cod == 1){
			city = "Sul"
		}
		senao se(cod == 2){
			city = "Norte"
		}
		senao se(cod == 3){
			city = "Leste"
		}
		senao se(cod == 4){
			city = "Oeste"
		}
		senao se(cod == 5 ou cod == 6){
			city = "Nordeste"
		}
		senao se(cod == 7 ou cod == 8 ou cod == 9){
			city = "Sudeste"
		}
		senao se(cod >= 10 e cod <= 20){
			city = "Centro-Oeste"
		}
		senao se(cod >= 21 e cod <= 30){
			city = "Noroeste"
		}
		senao{
			escreva("Area nao cadstrada\n\n")
		}
		/*Saida de dados*/
		se(cod >=1 e cod <= 30){
			escreva("Este produto vem da Região ", city, "\n\n")
		}
		senao{
			escreva("Reinicie\n\n")
		}
		/*FIM DE CÓDIGO*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 829; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */