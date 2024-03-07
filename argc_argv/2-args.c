#include "main.h"

/**
 * main - check the code
 * @argc: argument value og string to call function
 * @argv: argument count
 * Return: (SUCCESS)
 */

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

