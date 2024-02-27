#include "main.h"

/*
 * Main - void swap_int(int *a, int *b) - call two pointers
 * @a in memory swap
 * @b in memory swap
 * Return: (SUCCESS)
 */
i
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
