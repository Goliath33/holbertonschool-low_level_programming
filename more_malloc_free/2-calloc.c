#include "main.h"

/**
 * main - check the code
 * Return: Always NULL if size = 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = malloc(nmemb * size);
	if (j == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(j + i) = 0;

	return (j);
}
