#include "variadic_functions.h"

/**
 * print_all: all variable printall 
 * @va_list: call args and initialize the function
 * @va_start: start the variadic fucntion
 * @va_end: its the end of variadic function
 * Return: print the all if the args as correct.
 */

void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);

    char c;
    int i;
    float f;
    char *s;

    while (*format)
    {
        if (*format == 'c')
        {
            c = (char)va_arg(args, int);
            printf("%c", c);
        }
        else if (*format == 'i')
        {
            i = va_arg(args, int);
            printf("%d", i);
        }
        else if (*format == 'f')
        {
            f = (float)va_arg(args, double);
            printf("%f", f);
        }
        else if (*format == 's')
        {
            s = va_arg(args, char *);
            if (s)
                printf("%s", s);
            else
                printf("(nil)");
        }

        format++;
        if (*format)
            printf(", ");
    }

    va_end(args);
    printf("\n");
}
