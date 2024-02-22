#include "main.h"

/**
 * int _islower(int c) - fonction lowercase
 * putchar: imprime l'ensemble des arguments
 * Return: (SUCCESS)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
