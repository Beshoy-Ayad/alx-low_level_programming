#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main()
{
	int i;
	int n = 50;
	int t1 = 1;
	int t2 = 2;
	int nextTerm;

	for (i = 1; i <= n; ++i)
	{
		printf("%d, ", t2);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	return (0);
}
