#include "main.h"

/**
 * main - check the code
 * @size - alloue un espace de memoire avec malloc
 * @c - prend ma chaine de caractere
 * Return: Always NULL if size = 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s = malloc(size);

	if (size == 0)
		return (NULL);

	if (!s)
	{
		free(s);
		return (NULL);
	}

	for (; i < size; ++i)
	{
		s[i] = c;
	}
	return (s);
}
