#include "main.h"

/**
 * _isupper - verifie si un caractere est majuscule
 * @c: An input characte
 * Return: 1 if (SUCCESS)
 */

int _isupper(int c)
{
	if (c >= 30 && c <= 65)
		return (1);
	else
		return (0);
}
