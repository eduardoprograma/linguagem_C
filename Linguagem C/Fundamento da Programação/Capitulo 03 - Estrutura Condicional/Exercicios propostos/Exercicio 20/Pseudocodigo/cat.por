/*Programa Categoria*/
programa
{
	funcao inicio()
	{
		/*Declaração de variáveis*/
		inteiro ida	 		//Idade
		cadeia cat = ""	// categorias
		/*Entrada de dados*/
		escreva("Categoria para equipes de natação.\n\n")
		escreva("Digite a idade: ")
		leia(ida)
		/*Bloco de comando*/
		se(ida >= 5 e ida <= 7){
			cat = "Infantil"
		}
		senao se(ida >= 8 e ida <= 10){
			cat = "Juvenil"
		}
		senao se(ida >= 11 e ida <= 15){
			cat = "Adolescente"
		}
		senao se(ida >= 16 e ida <= 30){
			cat = "Adulto"
		}
		senao{
			cat = "Senior"
		}
		/*Saída de dados*/
		escreva("A categoria do participante: ", cat, "\n\n")
		/*FIM DO CÓDIGO*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 615; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */