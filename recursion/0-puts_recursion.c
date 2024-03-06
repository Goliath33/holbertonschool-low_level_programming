#include "main.h"

/**
 * _puts_recursion - puts string with recursion
 * @s: output
 * Return: (SUCCESS)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}	
