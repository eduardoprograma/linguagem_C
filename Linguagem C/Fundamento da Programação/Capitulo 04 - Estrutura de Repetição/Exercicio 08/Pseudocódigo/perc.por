/*Programa para calculo de percentual*/
programa
{
	funcao inicio()
	{
		/*Declaração de variáveis*/
		inteiro idade, cont, cont15 = 0, cont30 = 0, cont45 = 0, cont60 = 0, cont61 =0
		real vp
		/*Entrada de dados*/
		escreva("Programa que calcula as faixas etarias e seu percentual.\n\n")
		escreva("Digite a idade: ")
		leia(idade)
		/*Bloco de comandos*/
		para(cont = 1; cont <= 15; cont++){
			se(idade <= 15){
				cont15++
			}
			senao se(idade >= 16 e idade <= 30){
				cont30++
			}
			senao se(idade >= 31 e idade <= 45){
				cont45++
			}
			senao se(idade >= 46 e idade <= 60){
				cont60++
			}
			senao{
				cont61++
			}
			escreva("Digite a idade: ")
			leia(idade)
		}
		se(cont15 >= cont61){
			vp = ((cont15 - cont61) * 100) / cont15
		}
		senao{
			vp = ((cont61 - cont15) * 100) / cont15
		}
		/*Saída de dados*/
		escreva("        tabela     \n")
		escreva("NºPessoas\tFaixa etaria\t\n")
		escreva(cont15, "    \t", "            1Idade <= 15 anos\t\n")
		escreva(cont30, "    \t", "      16 <= Idade <= 30 anos\t\n")
		escreva(cont45, "    \t", "      31 <= Idade <= 45 anos\t\n")
		escreva(cont60, "    \t", "      46 <= Idade <= 60 anos\t\n")
		escreva(cont61, "    \t", "             Idade > 61 anos\t\n")
		escreva("Percentual entre a 1ª e a 5ª: ", vp, "%\t\n")
		/*Fim do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 919; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */