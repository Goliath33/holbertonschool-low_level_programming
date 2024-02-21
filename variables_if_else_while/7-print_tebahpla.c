#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - call fonction alpha for alphabet (qe erase)
 * Putchar all alphabet nether
 * Return: (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
