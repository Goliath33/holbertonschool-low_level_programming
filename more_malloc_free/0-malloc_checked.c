#include "main.h"

/**
 * main - check the code
 * @b - alloue un espace de memoire avec malloc
 * @c - prend ma chaine de caractere
 * Return: Always NULL if size = 0.
 */

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
