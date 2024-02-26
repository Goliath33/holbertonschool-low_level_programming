#include "main.h"

/**
 * print_square - affiche des # pour former un carre
 * @h - give a height of character
 * @w - give a width of character
 * @size: taille
 * Return: (SUCCESS)
 */

void print_square(int size)
{
	int h, w;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
