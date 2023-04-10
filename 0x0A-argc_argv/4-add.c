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
	int i, j, s = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[i]);
	}
	printf("%d\n", s);

	return (0);
}
