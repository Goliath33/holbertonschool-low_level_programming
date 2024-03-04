#include "main.h"

/**
 * main - _memcpy - to call a copy of adress memory
 * @n: bytes from memory
 * @src: source of memory
 * @dest: destination for the memory
 * Return: @dest (SUCCESS)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
