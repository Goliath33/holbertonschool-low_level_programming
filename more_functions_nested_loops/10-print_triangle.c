#include "main.h"

/**
 * print_triangle(int size) - affiche un triangle
 * h = height , w = width
 * @size - define at 0
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int w;
	int h;

	if (size > 0)
	{
		for (w = size ; w > 0 ; w--)
		{
			for (h = 1 ; h <= size ; h++)
			{
				if (h >= w)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
