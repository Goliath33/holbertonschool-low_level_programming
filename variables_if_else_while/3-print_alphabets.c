#include <stdio.h>
#include <stdlib.h>

/**
 * main - call fonction RAND_mAX with srand
 * Putchar imprime les caractere demandee
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

