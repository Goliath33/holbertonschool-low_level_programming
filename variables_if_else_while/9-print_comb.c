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

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
			if (digit < 9)
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}
