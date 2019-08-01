//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*5.36 	Torres de Hanói. 
	Todo cientista da computação iniciante precisa lutar contra certos problemas clássicos, e as Torres de Hanói (ver Figura 5.19) é um dos problemas mais famosos. A lenda diz que, em um templo no Extremo Oriente, sacerdotes estão tentando mover uma pilha de discos de um pino para outro. A pilha inicial tinha 64 discos dispostos em um pino e arrumados de baixo para cima por tamanho decrescente. Os sacerdotes estão tentando mover a pilha desse pino para um segundo pino sob as restrições de que apenas um disco é movido de cada vez, e em momento algum um disco maior pode ser colocado sobre um disco menor. Um terceiro pino está disponível para apoiar os discos temporariamente. Supostamente, o mundo terminará quando os sacerdotes completarem sua tarefa, de modo que não temos muito incentivo para facilitar seus esforços. Vamos supor que os sacerdotes estejam tentando mover os discos do pino 1 ao pino 3. Queremos desenvolver um algoritmo que imprimirá a sequência exata de transferências de pino, disco a disco. Se tivéssemos que resolver esse problema com a ajuda de métodos convencionais, ficaríamos presos na administração dos discos rapidamente. Em vez disso, se atacarmos o problema com a recursão em mente, ele imediatamente se tornará mais resolúvel. Mover n discos pode ser visto em termos de mover apenas n – 1 discos (e daí a recursão) da seguinte forma:
		a) Mova n – 1 discos do pino 1 para o pino 2, usando o pino 3 como área de manutenção temporária.
		b) Mova o último disco (o maior) do pino 1 para o pino 3. 
		c) Mova os n – 1 discos do pino 2 para o pino 3, usando o pino 1 como área de manutenção temporária. O processo termina quando a última tarefa envolver mover n = 1 disco, ou seja, o caso básico. Isso é feito movendo o disco de modo trivial, sem a necessidade de uma área de manutenção temporária.
	Escreva um programa que resolva o problema das Torres de Hanói. Use uma função recursiva com quatro parâmetros:
		a) O número de discos a serem movidos. 
		b) O pino no qual esses discos estão empilhados inicialmente.
		c) O pino para o qual a pilha de discos deve ser movida. 
		d) O pino a ser usado como área de manutenção temporária.
	Seu programa deverá imprimir as instruções exatas que ele usará para mover os discos do pino inicial para o pino de destino. Por exemplo, para mover uma pilha de três discos do pino 1 ao pino 3, seu programa deverá imprimir a seguinte série de movimentos: */

#include <stdio.h>

void hanoi(int n,char origem,char destino,char auxiliar){
	/*Se sobrar apenas o disco 1, mova fazer o movimento e retornar*/
	if(n == 1)
	{ 
		printf("\nMova o disco 1 da base %c para a base %c",origem ,destino);
		return;
	}
	else 
	{
		/*Mover o n-1 disco de A para B, usando C de auxiliar*/
		hanoi(n-1,origem,auxiliar,destino);

		/* Mover os discos restantes de A para C*/
		printf("\nMova o disco %d da base %c para a base %c",n,origem,destino);
		
		/*Mover os n-1 discos de B para C usando A como auxiliar*/
		hanoi(n-1,auxiliar,destino,origem);
	}
}

main(){
	int n;
	printf("Digite o numero de discos : ");
	scanf("%d",&n);
	printf("Para resolver a torre de Hanois faça :\n\n");
	hanoi(n,'A','C','B');
	printf("\n");
	return 0;
}