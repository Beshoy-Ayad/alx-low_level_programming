#include "main.h"

/**
 * reverse_array - reverse
 * @a: reversed
 * @n: number of n
 */

void reverse_array(int *a, int n)
{
	int i, temp;
	int *p = a;
	int *q = a + n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = *p;
		*p = *q;
		*q = temp;
		p++;
		q--;
	}
}
