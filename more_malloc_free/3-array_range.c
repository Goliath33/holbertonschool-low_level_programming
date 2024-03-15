#include "main.h"

/**
 * main - check the code
 * Return: Always NULL if size = 0.
 */

int *array_range(int min, int max)
{
    int i;
    int count = max - min + 1;
    int *arr = malloc(count * sizeof *arr);
    
    if (!arr) return (NULL);

    for (i = 0; i < count; i++)
        arr[i] = min++;

    return (arr);
}
