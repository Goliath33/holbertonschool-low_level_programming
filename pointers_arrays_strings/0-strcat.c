#include "main.h"

/**
 * char *_strcat - check the code by the prototype
 * @i, @j init the variables
 * Return: (SUCCESS)
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
		dest[i] = '\0';
	return (dest);
}
