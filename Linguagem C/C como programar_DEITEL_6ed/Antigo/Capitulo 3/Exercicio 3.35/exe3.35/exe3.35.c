/* Exercise 3.35 Solution */
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int number;		/* input number */
	int temp;		/* temporary integer */
	int firstDigit;		/* first digit of input */
	int secondDigit;	/* second digit of input */
	int fourthDigit;	/* fourth digit of input */
	int fifthDigit;	/* fifth digit of input */

	printf ( "Enter a five-digit number: " ); /* get number */
	scanf ("%d", &number);

	temp = number;

	/* determine first digit by integer division by 10000 */
	firstDigit = temp / 10000;
	temp = number % 10000;

	/* determine second digit by integer division by 1000 */
	secondDigit = temp / 1000;
	temp = number % 100;

	/* determine fourth digit by integer division by 10 */
	fourthDigit = temp / 10;
	fifthDigit = number % 10;

	/* if first and fifth digits are equal */
	if ( firstDigit == fifthDigit ) {

		/* if second and fourth digits are equal */
		if ( secondDigit == fourthDigit ) {

			/* number is palindrome */
			printf ( "%d is a palindrome\n", number );
		}
		else { /* number is not a palindrome */
			printf ( "%d is not a palindrome\n", number );
		} /* end else */

	} /* end if */
	else { /* number is not a palindrome */
		printf ( "%d is not a palindrome\n", number );
	} /* end else */
    system("pause");
	return 0; /* indicate sucefull termination */
} /* end main */