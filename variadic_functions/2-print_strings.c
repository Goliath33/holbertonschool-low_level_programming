#include "variadic_functions.h"

/**
 * print_strings: all variable printf string
 * @va_list: call args and initialize the function
 * @va_start: start the variadic fucntion
 * @va_end: its the end of variadic function
 * Return: print the string if the args as correct.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
        va_list args;
        va_start(args, n);

        for (i = 0; i < n; i++)
        {
                char *str = va_arg(args, char *);
                if (str == NULL)
                {
                        printf("(nil)");
                }
                else
                {
                        printf("%s", str);
                }

                if (i < n - 1 && separator != NULL)
                {
                        printf("%s", separator);
                }
        }

    printf("\n");
    va_end(args);
}
