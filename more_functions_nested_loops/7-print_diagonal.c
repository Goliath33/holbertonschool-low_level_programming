#include "main.h"

/**
 * print_diagonal(int n) - affiche des lignes d'une diagonale
 * @line An input character for _putchar and print character
 * @diag An imput to give a diagonal
 * Return: (SUCCESS)
 */

void print_diagonal(int n)
{
	int line, diag;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (diag = 0; diag < line; diag++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
		}
	}
		else
		{
			_putchar('\n');
		}
}
