#include "main.h"

/**
 * print_chessboard - function that print a chessboard
 * @needle: function finds the first occurrence of the substring
 * @haystack: the string
 * return: (SUCCESS) or (NULL) if the character not found
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	{
		_putchar(a[i][j]);
	}
	_putchar('\n');
	}	
}
