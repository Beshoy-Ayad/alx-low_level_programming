#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */

void swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
