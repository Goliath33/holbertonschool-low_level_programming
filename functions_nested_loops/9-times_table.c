#include "main.h"

/**
 * times_table(void) - affiche un resultat de table de mult
 * @num donne les numéro
 * @multi afficher les multiplication
 * @res affiche le resultat
 */

void times_table(void)
{
	int num, multi, res;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (multi = 1; multi <= 9; multi++)
		{
			res = (num * multi);
			if ((res / 10) > 0)
			{
				_putchar((res / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((res % 10) + '0');

			if (multi < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
