#include "main.h"

/*
 * print_rev: pousse un texte via "_putchar" a l'envers
 * *s - its pointers
 * Return: (SUCCESS)
 */

void print_rev(char *s)
{
	int print, rev = 0;

	while (s[print] != '\0')
	{
		print++;
	}
	for (rev = print - 1; rev >= 0; rev--)
	{
		putchar(s[rev]);
	}
	putchar('\n');

}
