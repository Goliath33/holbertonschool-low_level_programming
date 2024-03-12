#include "main.h"

/**
 * main - check the code
 * @size - alloue un espace de memoire avec malloc
 * @c - prend ma chaine de caractere
 * Return: Always NULL if size = 0.
 */

#include <stdlib.h> // Include the necessary header for malloc

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *s = malloc(size);

	if (!s)
		return (NULL);

	for (unsigned int i = 0; i < size; ++i)
	{
		s[i] = c;
	}
	return (s);
}
