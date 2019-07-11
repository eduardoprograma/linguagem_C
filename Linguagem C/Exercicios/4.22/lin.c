//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*4.22 	Nota média. 
	Modifique o programa da Figura 4.7 de modo que seja possível calcular a nota média da classe. */

/* Fig. 4.7: fig04_07.c 2
Contando notas de letra */
#include <stdio.h> 
/* função main inicia a execução do programa */ 

int main( void )  
{ 
	int nota; /* uma nota */
	int aCont = 0; /* número de As */ 
	int bCont = 0; /* número de Bs */ 
	int cCont = 0; /* número de Cs */ 
	int dCont = 0; /* número de Ds */ 
	int fCont = 0; /* número de Fs */
	double NA = 10, SNA = 0;
	double NB = 8.5, SNB = 0;
	double NC = 5.0, SNC = 0;
	double ND = 3.0, SND = 0;
	double NE = 0.0, SNE = 0, media = 0;


	printf( "Digite as notas em letra.\n" ); 
	printf( "Digite o caractere EOF para encerrar a entrada.\n" );
	scanf("%d", nota);
	
	/* loop até que o usuário digite sequência de fim de arquivo */ 
	while ( ( nota = getchar() ) != EOF ) 
	{
		/* determina qual nota foi digitada */ 
		switch ( nota ) 
		{ /* switch aninhado no while */
			case 'A': /* nota foi ‘A’ maiúsculo */ 
			case 'a': /* ou ‘a’ minúsculo */ 
				++aCont; /* incrementa aCount */
				SNA += NA * aCont; 
			break; /* necessário para sair do switch */
			case 'B': /* nota foi ‘B’ maiúsculo */ 
			case 'b': /* ou ‘b’ minúsculo */ 
				++bCont; /* incrementa bCount */ 
				SNB += NB * bCont;
			break; /* sai do switch */
			case 'C': /* nota foi ‘C’ maiúsculo */ 
			case 'c': /* ou ‘c’ minúsculo */ 
				++cCont; /* incrementa cCount */ 
				SNC = NC *cCont;
			break; /* sai do switch */
			case 'D': /* nota foi ‘D’ maiúsculo */
			case 'd': /* ou ‘d’ minúsculo */ 
				++dCont; /* incrementa dCount */ 
				SND += ND *dCont;
			break; /* sai do switch */
			case 'F': /* nota foi ‘F’ maiúsculo */ 
			case 'f': /* ou ‘f’ minúsculo */ 
				++fCont; /* incrementa fCount */
				SNE += NE * fCont; 
			break; /* sai do switch */
			case '\n': /* ignora caracteres de nova linha, */ 
			case '\t': /* tabulações, */
			case ' ': /* e espaços na entrada */ 
			break; /* sai do switch */
			default: /* apanha todos os outros caracteres */ 
				printf( "Letra de nota incorreta." ); printf( " Digite nova nota.\n" );
			break; /* opcional; sairá do switch de qualquer forma */
		} /* fim do switch */ 
		scanf("%d", nota);
	} /* fim do while */
	/* saída de resumo dos resultados */ 
	media = (SNA + SNB + SNC + SND + SNE) / (aCont + bCont +cCont + dCont + fCont);
	printf( "\nTotais para cada nota são:\n" );
	printf( "A: %d\n", aCont ); /* exibe número de notas A */ 
	printf( "B: %d\n", bCont ); /* exibe número de notas B */ 
	printf( "C: %d\n", cCont ); /* exibe número de notas C */ 
	printf( "D: %d\n", dCont ); /* exibe número de notas D */ 
	printf( "F: %d\n", fCont ); /* exibe número de notas F */ 
	if(media >= 9.5)
	{
		printf("A media da sala: %s\n", "A");
	}
	if(media >= 8.5 && media < 9.5)
	{
		printf("A media da sala: %s\n", "B");
	}
	if(media >= 5.0 && media < 8.5)
	{
		printf("A media da sala: %s\n", "C");
	}
	if(media >= 3.0 && media < 5.0)
	{
		printf("A media da sala: %s\n", "D");
	}
	if(media > 3.0)
	{
		printf("A media da sala: %s\n", "F");
	}
	return 0; /* indica que o programa foi concluído com sucesso */
} /* fim da função main */