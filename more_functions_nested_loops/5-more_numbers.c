#include "main.h"

/**
 * more_numbers(void) - affiche plus de nombres
 * @num An input character for _putchar and print character
 * @count An input chacaracter count * 10
 * Return: (SUCCESS)
 */

void more_numbers(void)
{
	int count, num;

	for (count = 0 ; count < 10 ; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
