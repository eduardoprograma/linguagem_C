/*Programa com 5 grupos e 4 varáveis cada*/
programa
{
	funcao inicio()
	{
		/*Declaração das variáveis*/
		cadeia A = "A", B = "B", C = "C", D = "D", E = "E"
		inteiro A1 = 0, A2 = 0, A3 = 0, A4 = 0
		inteiro B1 = 0, B2 = 0, B3 = 0, B4 = 0
		inteiro C1 = 0, C2 = 0, C3 = 0, C4 = 0
		inteiro D1 = 0, D2 = 0, D3 = 0, D4 = 0
		inteiro E1 = 0, E2 = 0, E3 = 0, E4 = 0
		cadeia grupo
		inteiro cont = 1
		inteiro n1 = 0, n2 = 0, n3 = 0, n4 = 0
		cadeia cad1 = "", cad2 = "", cad3 = "", cad4 = "", cad5 = ""
		inteiro cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0
		/*Entrada de Dados*/
		escreva("Abaixo estao os grupos funcionais.\n")
		escreva("Voce podra comecar por qualquer um.\n")
		escreva("***********GRUPOS************\n")
		escreva("              A              \n")
		escreva("              B              \n")
		escreva("              C              \n")
		escreva("              D              \n")
		escreva("              E              \n")
		escreva("Digite o primeiro Grupo de sua escolha: ")
		leia(grupo)
		/*Bloco de comando*/
		enquanto(cont <= 5){
			cont++
			escreva("Digiteo primeiro numero inteiro: ")
			leia(n1)
			escreva("Digiteo segundo numero inteiro: ")
			leia(n2)
			escreva("Digiteo terceiro numero inteiro: ")
			leia(n3)
			escreva("Digiteo quarto numero inteiro: ")
			leia(n4)
			se(grupo == A){
				cad1 = grupo
				cont1 = cont
				A1 = n1
				A2 = n2
				A3 = n3
				A4 = n4
			}
			senao se(grupo == B){
				cad2 = grupo
				cont2 = cont
				B1 = n1
				B2 = n2
				B3 = n3
				B4 = n4
			}
			senao se(grupo == C){
				cad3 = grupo
				cont3 = cont
				C1 = n1
				C2 = n2
				C3 = n3
				C4 = n4
			}
			senao se(grupo == D){
				cad4 = grupo
				cont4 = cont
				D1 = n1
				D2 = n2
				D3 = n3
				D4 = n4
			}
			senao se(grupo == E){
				cad5 = grupo
				cont5 = cont
				E1 = n1
				E2 = n2
				E3 = n3
				E4 = n4
			}
			senao{
				cont -= 1
				escreva("Digite um grupo valido de A a E.\n\n")
			}
			se(cont <= 5){
				escreva("Digite o primeiro Grupo de sua escolha: ")
				leia(grupo)
			}
		}
		/*Saída de dados*/
		escreva("Grupo\tnº1\tnº2\tnº3\tnº4\t\n")
		/*Primeira linha*/
		se(cont1 == 1){
			escreva(cad1, "\t", A1, "\t", A2, "\t", A3, "\t", A4, "\t\n")
		}
		senao se(cont2 == 1){
			escreva(cad2, "\t", B1, "\t",B2, "\t", B3, "\t", B4, "\t\n")
		}
		senao se(cont3 == 1){
			escreva(cad3, "\t", C1, "\t", C2, "\t", C3, "\t", C4, "\t\n")
		}
		senao se(cont4 == 1){
			escreva(cad4, "\t", D1, "\t", D2, "\t", D3, "\t", D4, "\t\n")
		}
		senao se(cont5 == 1){
			escreva(cad5, "\t", E1, "\t", E2, "\t", E3, "\t", E4, "\t\n")
		}
		/*Primeira linha*/
		se(cont1 == 2){
			escreva(cad1, "\t", A1, "\t", A2, "\t", A3, "\t", A4, "\t\n")
		}
		senao se(cont2 == 2){
			escreva(cad2, "\t", B1, "\t", B2, "\t", B3, "\t", B4, "\t\n")
		}
		senao se(cont3 == 2){
			escreva(cad3, "\t", C1, "\t", C2, "\t", C3, "\t", C4, "\t\n")
		}
		senao se(cont4 == 2){
			escreva(cad4, "\t", D1, "\t", D2, "\t", D3, "\t", D4, "\t\n")
		}
		senao se(cont5 == 2){
			escreva(cad5, "\t", E1, "\t", E2, "\t", E3, "\t", E4, "\t\n")
		}
		/*Terceira linha*/
		se(cont1 == 3){
			escreva(cad1, "\t", A1, "\t", A2, "\t", A3, "\t", A4, "\t\n")
		}
		senao se(cont2 == 3){
			escreva(cad2, "\t", B1, "\t", B2, "\t", B3, "\t", B4, "\t\n")
		}
		senao se(cont3 == 3){
			escreva(cad3, "\t", C1, "\t", C2, "\t", C3, "\t", C4, "\t\n")
		}
		senao se(cont4 == 3){
			escreva(cad4, "\t", D1, "\t", D2, "\t", D3, "\t", D4, "\t\n")
		}
		senao se(cont5 == 3){
			escreva(cad5, "\t", E1, "\t", E2, "\t", E3, "\t", E4, "\t\n")
		}
		/*Quarta linha*/
		se(cont1 == 4){
			escreva(cad1, "\t", A1, "\t", A2, "\t", A3, "\t", A4, "\t\n")
		}
		senao se(cont2 == 4){
			escreva(cad2, "\t", B1, "\t", B2, "\t", B3, "\t", B4, "\t\n")
		}
		senao se(cont3 == 4){
			escreva(cad3, "\t", C1, "\t", C2, "\t", C3, "\t", C4, "\t\n")
		}
		senao se(cont4 == 4){
			escreva(cad4, "\t", D1, "\t", D2, "\t", D3, "\t", D4, "\t\n")
		}
		senao se(cont5 == 4){
			escreva(cad5, "\t", E1, "\t", E2, "\t", E3, "\t", E4, "\t\n")
		}
		/*Quinta linha*/
		se(cont1 == 5){
			escreva(cad1, "\t", A1, "\t", A2, "\t", A3, "\t", A4, "\t\n")
		}
		senao se(cont2 == 5){
			escreva(cad2, "\t", B1, "\t", B2, "\t", B3, "\t", B4, "\t\n")
		}
		senao se(cont3 == 5){
			escreva(cad3, "\t", C1, "\t", C2, "\t", C3, "\t", C4, "\t\n")
		}
		senao se(cont4 == 5){
			escreva(cad4, "\t", D1, "\t", D2, "\t", D3, "\t", D4, "\t\n")
		}
		senao se(cont5 == 5){
			escreva(cad5, "\t", E1, "\t", E2, "\t", E3, "\t", E4, "\t\n")
		}
		/*CRESCENTE*/
		escreva("Grupo\tnº1\tnº2\tnº3\tnº4\t\n")
		escreva(cad1, "\t", A1, "\t", A2, "\t", A3, "\t", A4, "\t\n")
		escreva(cad2, "\t", B1, "\t", B2, "\t", B3, "\t", B4, "\t\n")
		escreva(cad3, "\t", C1, "\t", C2, "\t", C3, "\t", C4, "\t\n")
		escreva(cad4, "\t", D1, "\t", D2, "\t", D3, "\t", D4, "\t\n")
		escreva(cad5, "\t", E1, "\t", E2, "\t", E3, "\t", E4, "\t\n")
		/*DECRESCENTE*/
		escreva("Grupo\tnº1\tnº2\tnº3\tnº4\t\n")
		escreva(cad5, "\t", E1, "\t", E2, "\t", E3, "\t", E4, "\t\n")
		escreva(cad4, "\t", D1, "\t", D2, "\t", D3, "\t", D4, "\t\n")
		escreva(cad3, "\t", C1, "\t", C2, "\t", C3, "\t", C4, "\t\n")
		escreva(cad2, "\t", B1, "\t", B2, "\t", B3, "\t", B4, "\t\n")
		escreva(cad1, "\t", A1, "\t", A2, "\t", A3, "\t", A4, "\t\n")
		/*Fim do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 3592; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */