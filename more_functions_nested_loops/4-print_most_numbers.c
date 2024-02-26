#include "main.h"

/**
 * print_most_numbers(void) - verifie si un caractere est majuscule
 * @num An input character for _putchar and print character
 * Return: (SUCCESS)
 */

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
	_putchar('\n');
}
