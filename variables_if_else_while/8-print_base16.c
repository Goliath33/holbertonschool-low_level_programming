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
	char alpha;

	for (digit = 0; digit < 10; digit++)
		putchar((digit % 10) + '0');

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
