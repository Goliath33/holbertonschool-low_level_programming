#include "main.h"

/**
 * main - appel de putchar pour imprime _putchar
 * putchar: imprime l'ensemble des arguments
 * Return: (SUCCESS)
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
