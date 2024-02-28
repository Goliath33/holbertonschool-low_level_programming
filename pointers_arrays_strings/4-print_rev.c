#include "main.h"

/*
 * print_rev: pousse un texte via "_putchar" a l'envers
 * *s - its pointers
 * Return: (SUCCESS)
 */

void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
	{
		rev++;
	}
	while (rev)
	{
		putchar(s[--rev]);
	}
	putchar('\n');

}
