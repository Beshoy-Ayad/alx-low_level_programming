#include <stdio.h>

/**
 * main -  multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int n;
	int s;

	s = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			s += n;
		}
	}
	printf("%d\n", s);

	return (0);
}
