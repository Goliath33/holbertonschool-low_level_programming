#include <stdio.h>

/**
 * main - call fonction printf
 * Printf - Attribution pour chaque type de donnees
 * int: 4 bytes
 * uint: 4 bytes
 * long: 4 bytes
 * ulong: 4 bytes
 * float: 4 bytes
 * double: 8 bytes
 * Return: (success)
 */

int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));

	return (0);
}

