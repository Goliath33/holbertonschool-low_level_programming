#include "main.h"

/**
 * _strchr - check a string and locate character
 * @c: for the character
 * @s: for the string
 * return: (SUCCESS) or (NULL) if the character not found
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{	
			return (NULL);
		}
	}
}
