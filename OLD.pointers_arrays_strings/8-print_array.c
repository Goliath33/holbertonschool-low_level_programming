#include "main.h"

/**
 * print_array(int *a, int n) - check integrer *a and n
 * @n number of element
 * @*a integrer
 * return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n - 1)
			printf("%d, ", a[i++]);
		printf("%d\n", a[i]);
	}
	else
		printf("\n");
}
