#include "main.h"

/**
 * print_sign(int n)  - fonction lowercase
 * putchar: imprime l'ensemble des arguments
 * Return: (SUCCESS)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
