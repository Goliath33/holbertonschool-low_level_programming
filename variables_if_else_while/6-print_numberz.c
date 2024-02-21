#include <stdio.h>
#include <stdlib.h>

/**
 * main - call digital number
 * putchar - affiche les caractere demandee
 * Return: (success)
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; ++digit)

		putchar(digit);

	putchar('\n');

	return (0);
}
