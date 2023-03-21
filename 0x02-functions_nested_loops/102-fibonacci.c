#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main()
{
	int i;
	int n = 50;
	long t1 = 1;
	long t2 = 2;

	for (i = 1; i <= (n / 2); i++)
	{
		printf("%li %li ", t1, t2);
		t1 += t2;
		t2 += t1;
	}
	if (n % 2 == 1)
		printf("%li", t1);

	return (0);
}
