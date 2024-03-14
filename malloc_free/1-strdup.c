#include "main.h"

/**
 * main - check the code
 * @size - alloue un espace de memoire avec malloc
 * @c - prend ma chaine de caractere
 * Return: Always NULL if size = 0.
 */

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	new_str = (char *)malloc((strlen(str) + 1) * sizeof(char));

	if (new_str != NULL)
	{
		strcpy(new_str, str);
	}

	return (new_str);
	free (str);
}
