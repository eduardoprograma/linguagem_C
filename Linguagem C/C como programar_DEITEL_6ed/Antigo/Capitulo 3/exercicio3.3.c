#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main() {
	setlocale(LC_ALL, "Portuguese");
	int x = 2, y = 3 , z;
	int produto;
	int contagem = 11;
	int total = 20;
	int divisor =3, q = 9;
	
	produto = x*y*y;
	
	printf("Soma � igual: %d\n", z = x + y);
	printf("Multiplica��o do produto:%d\n", produto *= 2);
	printf("Multiplica��o do produto:%d\n", produto * 2);
	printf("Contagem maior que 10\n");
	printf("Total subtraido x--: %d\n", total - x--);
	printf("total somado a x--: %d\n", total + x--);
	printf("Primeira classe de divis�o: %d\n", q % divisor);
	printf("Primeira classe de divis�o: %d\n", q %= divisor);
	printf("%.2f", 123.4567);
	printf("%.3f", 3.14159);
	
	return 0;
}
