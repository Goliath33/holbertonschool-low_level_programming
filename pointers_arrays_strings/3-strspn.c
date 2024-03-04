#include "main.h"

/**
 *Main - _strspn -
 *
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t i = 0;

	while (s[i] && strchr(accept, s[i]))
	{
		i++;
	}
	return (i);
}
