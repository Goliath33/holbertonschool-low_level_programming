#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @needle: function finds the first occurrence of the substring
 * @haystack: the string
 * return: (SUCCESS) or (NULL) if the character not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0'; j++)
	{
		if (haystack[i + j] != needle[j])
		break;
	}
		if (!needle[j])
		return (&haystack[i]);
	}
	return (NULL);
}	
