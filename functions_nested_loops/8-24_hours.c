#include "main.h"

/**
 * jack_bauer(void) - affiche un compteur de 24H
 * @h pour afficher les heures
 * @m:pour afficher les minutes
 * Return: (SUCCESS)
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
