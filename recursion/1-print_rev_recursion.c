#include "main.h"

/**
 * _puts_rev_recursion - puts string with recursion reverse
 * @s: output
 * Return: (SUCCESS)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
        	_print_rev_recursion(s + 1);
        	_putchar(*s);
	}
}
