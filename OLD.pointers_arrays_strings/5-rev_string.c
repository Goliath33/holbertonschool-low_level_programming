#include "main.h"

/*
 * rev_string -  pousse un texte via "_putchar" a l'envers
 * *s - its pointers
 * Return: (SUCCESS)
 */

void rev_string(char *s)
{
	int rev = 0;
	int len = 0;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	while (rev < len--)
	{
		tmp = s[rev];
		s[rev++] = s[len];
		s[len] = tmp;
	}
}
