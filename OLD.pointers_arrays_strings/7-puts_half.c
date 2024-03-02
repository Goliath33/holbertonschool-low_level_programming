#include "main.h"

/**
 * puts_half - check
 * @str: have the strig
 * return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
	i++;
	}
	i = i + 1;
	i = i / 2;
	for (j = i; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
