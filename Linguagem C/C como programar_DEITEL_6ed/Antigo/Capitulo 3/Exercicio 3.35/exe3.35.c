#include <stdio.h>
#include <stdlib.h>

int main ()
	{
		int numero = 0, memoria = 0, inverso = 0, dezena_milhar = 0, milhar = 0, centena = 0, dezena = 0, unidade = 0;

		printf ("Entre com um numero de cinco digitos: ");
		scanf ("%d", &numero);

		memoria = numero;
		dezena_milhar = memoria / 10000;
		memoria -= dezena_milhar * 10000;
		milhar = memoria / 1000;
		memoria -= milhar * 1000;
		centena = memoria / 100;
		memoria -= centena * 100;
		dezena = memoria / 10;
		memoria -= dezena * 10;
		unidade = memoria;

		inverso = ((unidade * 10000) + (dezena * 1000) + (centena * 100) + (milhar * 10) + (dezena_milhar * 1));

		printf ("Dezena Milhar %d\n", dezena_milhar);
		printf ("Milhar %d\n", milhar);
		printf ("Centena %d\n", centena);
		printf ("Dezena %d\n", dezena);
		printf ("Unidade %d\n", unidade);

		printf ("Numero original: %d\nNumero invertido: %d\n", numero, inverso);

		printf ("%d\n", (inverso / 10000));
		printf ("%d\n", ((inverso - ((inverso / 10000) * 10000)) / 1000));

		if (unidade == (inverso / 10000) && milhar == ((inverso - ((inverso / 10000) * 10000)) / 1000))
			printf ("E um palindromo.\n");
        system("pause");
		return 0;
	}