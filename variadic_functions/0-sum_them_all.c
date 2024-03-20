#include "variadic_functions.h"

/**
 * sum_them_all - all variable sum
 * @va_list call args and initialize the function
 * @va_start start the variadic fucntion
 * @va_end its the end of variadic function 
 * Return: Sum if the args as correct.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
        unsigned int i;
        int sum = 0;

        if (n == 0)
                return (0);

        va_start(args, n);
        for (i = 0; i < n; i++)
        {
                sum += va_arg(args, int);
        }
        va_end(args);

        return (sum);
}
