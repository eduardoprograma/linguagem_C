/*Programa Categoria*/
programa
{
	funcao inicio()
	{
		/*Declara��o de vari�veis*/
		inteiro ida	 		//Idade
		cadeia cat = ""	// categorias
		/*Entrada de dados*/
		escreva("Categoria para equipes de nata��o.\n\n")
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
		/*Sa�da de dados*/
		escreva("A categoria do participante: ", cat, "\n\n")
		/*FIM DO C�DIGO*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 615; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */