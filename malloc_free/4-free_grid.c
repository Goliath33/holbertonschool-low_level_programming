#include "main.h"

/**
 * main - check the code
 * @size - alloue un espace de memoire avec malloc
 * @c - prend ma chaine de caractere
 * Return: Always NULL if size = 0.
 */

void free_grid(int **grid, int height)
{
    if (grid == NULL || height <= 0)
    {
        return;
    }

    for (int i = 0; i < height; i++)
    {
        free(grid[i]);
    }
    free(grid);
}
