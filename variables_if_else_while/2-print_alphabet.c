#include <stdio.h>
#include <stdlib.h>

/**
 * main - call alphabet
 * putchar - affiche les caractere demandee
 * Return: (success)
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
			putchar(alpha);
		putchar('\n');
	return (0);
}

