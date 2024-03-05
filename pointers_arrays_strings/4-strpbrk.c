#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @accept: accept the character
 * @s: for the string it was first occurrence
 * return: (SUCCESS) or (NULL) if the character not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (*s == accept[j])
		{
			return (s);
		}
	}
	s++;
}
return (NULL);
}
