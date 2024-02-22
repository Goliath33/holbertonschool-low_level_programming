#include "main.h"

/**
 * print_alphabet_x10 - fonction appele
 * putchar: imprime l'ensemble des arguments
 * Return: (SUCCESS)
 */

void print_alphabet_x10(void)
{
	char alpha;
	int count;

	for (count = 0 ; count < 10 ; count++)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
