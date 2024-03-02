#include "main.h"

/**
 * _strcpy - function prototype
 * @dest: char ptr
 * @src: char ptr
 * Return: (SUCCESS)
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	char *string = src;

	while (*src != '\0')
	{
		*dest = *src;
		length++;
		dest++;
		src++;
	}
	*dest = '\0';
	return (string);
}
