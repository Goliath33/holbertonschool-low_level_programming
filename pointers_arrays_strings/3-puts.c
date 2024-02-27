#include "main.h"

/*
 * _puts: pousse un texte via "_puts"
 * Printf - utilise pour imprimer les strings (caractere) de str
 * @str - its pointers
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
