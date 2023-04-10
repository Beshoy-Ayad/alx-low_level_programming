#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
