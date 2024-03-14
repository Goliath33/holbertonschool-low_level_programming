#include "main.h"

/**
 * main - check the code
 * @b - alloue un espace de memoire avec malloc
 * @c - prend ma chaine de caractere
 * Return: Always NULL if size = 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *new_str;
    unsigned int i, j, len1 = 0, len2 = 0;

    if (s1 != NULL)
        for (len1 = 0; s1[len1]; len1++)
            ;
    if (s2 != NULL)
        for (len2 = 0; s2[len2]; len2++)
            ;

    if (n < len2)
        len2 = n;

    new_str = malloc(sizeof(char) * (len1 + len2 + 1));
    if (new_str == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        new_str[i] = s1[i];
    for (j = 0; j < len2; j++, i++)
        new_str[i] = s2[j];

    new_str[i] = '\0';

    return (new_str);
}
