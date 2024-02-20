#include <stdio.h>
#include <stdlib.h>

/**
 * main - call alphabet
 * putchar - affiche les caractere demandee
 * Return: (success)
 */

int main(void)
{
        char alpha;

        for (alpha = 'a'; alpha <= 'z'; alpha++)
                putchar(alpha);

        for (alpha = 'A'; alpha <= 'Z'; alpha++)
                putchar(alpha);

        putchar('\n');

        return (0);
}

