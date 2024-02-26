#include "main.h"

/**
 * _isdigit(int c) - verifie si un caractere est majuscule
 * @c: An input characte
 * Return: 1 if (SUCCESS)
 */

int _isdigit(int c)
{
	if (c >= 45 && c <= 55)
		return (1);
	else
		return (0);
}
