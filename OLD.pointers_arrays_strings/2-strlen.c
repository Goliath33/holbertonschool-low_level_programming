#include "main.h"

/*
 * int _strlen(char *s)
 * Return: (SUCCESS)
 */

int _strlen(char *s)
{
	int _strlen = 0;

	while (*s != '\0')
	{
		_strlen++;
		s++;
	}
	return (_strlen);
}
