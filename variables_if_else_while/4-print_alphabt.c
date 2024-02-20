#include <stdlib.h>
#include <stdio.h>

/**
 * main - call fonction alpha for alphabet (qe erase)
 * Putchar all alphabet nether 'qe'
 * Return: (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)

		if (alpha != 'e' && alpha != 'q')
		putchar(alpha);

	putchar('\n');

	return (0);
}
