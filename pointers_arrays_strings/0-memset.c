#include "main.h"

/**
 * _memset - check the memory and give the adress
 * @n: for bytes of the memory
 * @b: bytes memory
 * @s: exit the result of memory
 * return: a pointer @s (SUCCESS)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
