#include "main.h"

/**
 * _atoi - convert string to integer
 * Description: similar function to atoi
 * @s: the string
 * Return: (SUCCESS)
 */

int _atoi(char *s) 
{
	int result = 0; 
	int sign = 1;  
	int i = 0;
	
	if (s[0] == '-')
	{
		sign = -1;
		++i;
	}
	
	for (; s[i] != '\0'; ++i)
	{
		result = result * 10 + s[i] - '0';
	}
	
	return sign * result;
}
