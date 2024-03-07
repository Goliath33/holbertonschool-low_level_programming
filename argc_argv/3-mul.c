#include "main.h"

/**
 * main - check the code for multiplies
 * @argc: argument value og string to call function
 * @argv: argument count
 * Return: (SUCCESS)
 */

int main(int argc, char *argv[])
{
	int num1, num2, product;

	if(argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);
	return (0);
}
