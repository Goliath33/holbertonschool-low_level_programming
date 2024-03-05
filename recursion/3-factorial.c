#include "main.h"

/**
 * _strlen_recursion - give a number bytes use on memory
 * @n: its a factorial  
 * Return: (SUCCESS)
 */

int factorial(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}
