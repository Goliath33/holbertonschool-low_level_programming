#include "main.h"

/*
 * _puts: pousse un texte via "_putchar"
 * *str - its pointers
 * Return: (SUCCESS)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}