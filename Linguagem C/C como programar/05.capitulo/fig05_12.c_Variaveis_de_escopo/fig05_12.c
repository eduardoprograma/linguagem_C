//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 19/07/2019
//Descrição ou Finalidade: 
/*A Figura 5.12 demonstra os problemas de escopo com as variáveis globais, variáveis locais automáticas e variáveis locais static. Uma variável global x é definida e inicializada em 1 (linha 9). Essa variável global é ocultada em qualquer bloco (ou função) em que um nome de variável x é definido. Em main, uma variável local x é definida e inicializada em 5 (linha 14). Essa variável é então exibida para mostrar que o x global está ocultado em main. Em seguida, um novo bloco é definido em main com outra variável local x inicializada em 7 (linha 19). Essa variável é exibida para mostrar que ela oculta x no bloco externo de main. A variável x com valor 7 é automaticamente destruída quando o bloco termina, e a variável local x no bloco externo de main é exibida novamente para mostrar que ela não está mais oculta. O programa define três funções que não utilizam nenhum argumento, nem retornam nada. A função useLocal define uma variável automática x e a inicializa em 25 (linha 40). Quando useLocal é chamada, a variável é exibida, incrementada e exibida novamente antes da saída da função. Toda vez que essa função é chamada, a variável automática x é reinicializada em 25. A função useStaticLocal define uma variável static x e a inicializa em 50 (linha 53). As variáveis locais declaradas como static retêm seus valores mesmo quando estão fora do escopo. Quando useStaticLocal é chamada, x é exibida, incrementada e exibida novamente antes da saída da função. Da próxima vez em que essa função for chamada, a variável local static x terá o valor 51. A função useGlobal não define variável alguma. Portanto, quando ela se refere à variável x, o x global (linha 9) é usado. Quando useGlobal é chamada, a variável global é exibida, multiplicada por 10 e exibida novamente antes da saída da função. Da próxima vez em que a função useGlobal for chamada, a variável global ainda terá seu valor modificado, 10. Por fim, o programa exibe a variável local x em main novamente (linha 33) para mostrar que nenhuma das chamadas de função modificou o valor de x, pois todas as funções se referiam a variáveis em outros escopos. */

#include <stdio.h>

void useLocal(void);			/* protótipo de função */
void useStaticLocal(void);			/* protótipo de função */
void useGlobal(void);			/* protótipo de função */

int x = 1;			/* variável global */

/* função main inicia a execução do programa */
int main(void)	
{
	/* declaração das varáveis */
	int x = 5;			/* variável local para main */

	printf("x local no escopo externo de main é %d\n", x);

	/* processamento */
	{ /* inicia novo escopo */ 
		int x = 7;			/* variavel local para novo escopo */
		printf("x local no escopo interno de main é %d\n", x); 
	} /* fim do novo escopo */

	printf("x local no escopo externo de main é %d\n", x);

	useLocal();			/* useLocal tem x local automática */
	useStaticLocal();			/* useStaticLocal tem x local estática */ 
	useGlobal();			/* useGlobal usa x global */
	useLocal();			/* useLocal reinicializa x local automática */ 
	useStaticLocal();			/* x local estática retém seu valor anterior */ 
	useGlobal();			/* x global também retém seu valor */

	/* saída de dados */
	printf("\nx local em main é %d\n", x ); 
	return 0;			/* indica conclusão bem-sucedida */
}			//fim da função main.

/* useLocal reinicializa variável local x durante cada chamada */
void useLocal(void)
{
	int x = 25;			/* inicializada toda vez que useLocal é chamada */

	printf("\nx local em useLocal é %d após entrar em useLocal\n", x); 
	x++;
	printf("x local em useLocal é %d antes de sair de useLocal\n", x);
}			/* fim da função useLocal */

/* useStaticLocal inicializa variável local estática x somente na primeira vez em que essa função é chamada; o valor de x é salvo entre as chamadas a essa função */
void useStaticLocal(void)
{
	/* inicializada apenas na primeira vez que useStaticLocal é chamada */ 
	static int x = 50;

	printf("\nx estática local é %d na entrada de useStaticLocal\n", x); 
	x++;
	printf("x estática local é %d na saída de useStaticLocal\n", x);
}			/* fim da função useStaticLocal */

/* função useGlobal modifica variável global x durante cada chamada */
void useGlobal(void)
{
	printf("\nx global é %d na entrada de useGlobal\n", x ); 
	x *= 10;
	printf("x global é %d na saída de useGlobal\n", x );
}			/* fim da função useGlobal */