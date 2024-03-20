#include "variadic_functions.h"

/**
 * print_numbers - all variable printf num
 * @va_list call args and initialize the function
 * @va_start start the variadic fucntion
 * @va_end its the end of variadic function
 * Return: print the num if the args as correct.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
