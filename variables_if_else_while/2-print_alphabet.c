#include <stdio.h>
#include <stdlib.h>

/**
 * main - call fonction RAND_mAX with srand
 * Printf - Imprime les caractere demandee
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

