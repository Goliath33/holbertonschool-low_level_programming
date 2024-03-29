#include "main.h"

/**
 * main - check the code
 * @size - alloue un espace de memoire avec malloc
 * @c - prend ma chaine de caractere
 * Return: Always NULL if size = 0.
 */

int **alloc_grid(int width, int height)
{
    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }

    int **grid = malloc(height * sizeof(int *));
    if (grid == NULL)
    {
        return (NULL);
    }

    for (int i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {

            for (int j = 0; j < i; j++)
            {
                free(grid[j]);
            }
            free(grid);
            return (NULL);
        }

        for (int j = 0; j < width; j++)
        {
            grid[i][j] = 0;
        }
    }

    return (grid);
}
