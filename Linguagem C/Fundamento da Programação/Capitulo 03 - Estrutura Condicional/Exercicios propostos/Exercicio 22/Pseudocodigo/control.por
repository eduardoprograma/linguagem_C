/*Programa Controle de Peso baseado na idade*/
programa
{
	funcao inicio()
	{
		/*Declara��o de vari�veis*/
		inteiro idade																				//Var�vel de sele��o
		real peso																					//Vari�vel de sele��o
		inteiro i2060 = 0, i2069 = 0, i2090 = 0, i2560 = 0, i2569 = 0, i2590 = 0, i5060 = 0, i5069 = 0, i5090 = 0	//Var�aveis de controle
		/*Entrada de dados*/
		escreva("Programa 'Controle de Peso Baseado na idade'.\n\n")
		escreva("Digite a idade : ")
		leia(idade)
		/*Bloco de comando*/
		enquanto(idade != -1){						//Qunado digitar -1 o programa � ancerrado
			escreva("Digite o peso: ")
			leia(peso)
			se(idade <= 20){						//Controle baseado na idade
				se(peso <= 60){
					i2060++						//Controle por somador
				}
				senao se(peso > 60 e peso <= 90){
					i2069++
				}
				senao{
					i2090++
				}
			}
			senao se(idade > 20 e idade <= 50){
				se(peso <= 60){
					i2560++
				}
				senao se(peso > 60 e peso <= 90){
					i2569++
				}
				senao{
					i2590++
				}
			}
			senao{
				se(peso <= 60){
					i5060++
				}
				senao se(peso > 60 e peso <= 90){
					i5069++
				}
				senao{
					i5090++
				}
			}
			escreva("Programa 'Controle de Peso Baseado na idade'.\n\n")
			escreva("Digite a idade : ")
			leia(idade)
		}
		/*Sa�da de dados*/
		escreva("IDADE\t", "> 60\t", "60 > e <= 90\t", "> 90\t\n")			//Sa�da em forma de tabela
		escreva("<= 20\t", i2060, "\t", i2069, "\t", i2090, "\t\n")
		escreva("> 20 e <= 50\t", i2560, "\t", i2569, "\t", i2590, "\t\n")
		escreva("> 50\t", i5060, "\t", i5069, "\t", i5090, "\t\n")
		/*Fim do c�digo*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1369; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */