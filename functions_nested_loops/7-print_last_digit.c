#include "main.h"

/**
 * print_last_digit - imprime le dernier chiffre
 * @n: Le nombre en question
 * Return: (SUCCESS)
 */

int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
	digit *= -1;
	_putchar(digit + '0');

	return (digit);
}
