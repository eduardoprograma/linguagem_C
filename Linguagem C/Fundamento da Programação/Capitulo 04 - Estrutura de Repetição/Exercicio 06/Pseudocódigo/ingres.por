/*Programa Valor do ingress x Lucratividade*/
programa
{
	funcao inicio()
	{
		/*Declaração de varáveis*/
		inteiro i = 120, b = 26, i2 = 0, i3 = 0, i4 = 0, i5 = 0, i6 = 0, i7= 0, i8 = 0, i9 = 0, i10 = 0
		real vi, d = 200.00, vb = 0.50, vt
		real lm1 = 0.0, pi1 = 0.0, lm2 = 0.0, pi2 = 0.0, lm3 = 0.0, pi3 = 0.0, lm4 = 0.0, pi4 = 0.0, lm5 = 0.0, pi5 = 0.0, lm6 = 0.0, pi6 = 0.0, pi7 = 0.0, lm7 = 0.0, pi8 = 0.0, lm8 = 0.0, pi9 = 0.0, lm9 = 0.0, pi10 = 0.0, lm10 = 0.0
		inteiro q1 = 0, q2 = 0, q3 = 0, q4 = 0, q5 = 0, q6 = 0, q7 = 0, q8 = 0, q9 = 0, q10 = 0
		/*Entrada de dados*/
		/*Bloco de comandos*/
		para(vi = 5.00; vi >= 0.50; vi -= vb){
			se(vi == 5.00){
				i = 120
				vt = vi * i
				lm1 = vt - d
				pi1 = vi
				q1 = i				
			}
			senao se(vi == 4.50){
				i2 = 120 + b
				vt = vi * i2
				lm2 = vt - d
				pi2 = vi
				q2 = i2	
			}
			senao se(vi == 4.00){
				i3 = i2 + b
				vt = vi * i3
				lm3 = vt - d
				pi3 = vi
				q3 = i3	
			}
			senao se(vi == 3.50){
				i4 = i3 + b
				vt = vi * i4
				lm4 = vt - d
				pi4 = vi
				q4 = i4	
			}
			senao se(vi == 3.00){
				i5 = i4 + b
				vt = vi * i5
				lm5 = vt - d
				pi5 = vi
				q5 = i5	
			}
			senao se(vi == 2.50){
				i6 = i5 + b
				vt = vi * i6
				lm6 = vt - d
				pi6 = vi
				q6 = i6	
			}
			senao se(vi == 2.00){
				i7 = i6 + b
				vt = vi * i7
				lm7 = vt - d
				pi7 = vi
				q7 = i7	
			}
			senao se(vi == 1.50){
				i8 = i7 + b
				vt = vi * i8
				lm8 = vt - d
				pi8 = vi
				q8 = i8	
			}
			senao se(vi == 1.00){
				i9 = i8 + b
				vt = vi * i9
				lm9 = vt - d
				pi9 = vi
				q9 = i9	
			}
			senao se(vi == 0.50){
				i10 = i9 + b
				vt = vi * i10
				lm10 = vt - d
				pi10 = vi
				q10 = i10	
			}
		}
		/*Saída de dados*/
		escreva("          tabela       \n")
		escreva("lucro maximo\tPreco do ingreço\tQuantidade vendida\t\n")
		escreva(lm1, "        \t", pi1, "             \t", q1, "   \t\n")
		escreva(lm2, "        \t", pi2, "             \t", q2, "   \t\n")
		escreva(lm3, "        \t", pi3, "             \t", q3, "   \t\n")
		escreva(lm4, "        \t", pi4, "             \t", q4, "   \t\n")
		escreva(lm5, "        \t", pi5, "             \t", q5, "   \t\n")
		escreva(lm6, "        \t", pi6, "             \t", q6, "   \t\n")
		escreva(lm7, "        \t", pi7, "             \t", q7, "   \t\n")
		escreva(lm8, "        \t", pi8, "             \t", q8, "   \t\n")
		escreva(lm9, "        \t", pi9, "             \t", q9, "   \t\n")
		escreva(lm10, "       \t", pi10, "              \t", q10, "  \t\n")
		/*Fim do código*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 2491; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */