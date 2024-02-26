#include "main.h"

/**
 * _isdigit(int c) - verifie si un caractere est majuscule
 * @c: An input characte
 * Return: 1 if (SUCCESS) and 0 si pas de majuscule
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
