#include "main.h"

/**
 * print_line(int n) - affiche des lignes
 * @line An input character for _putchar and print character
 * Return: (SUCCESS)
 */

void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
