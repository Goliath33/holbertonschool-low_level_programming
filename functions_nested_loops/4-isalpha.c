#include "main.h"

/**
 * _isalpha(int c) - fonction lowercase
 * putchar: imprime l'ensemble des arguments
 * Return: (SUCCESS)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
