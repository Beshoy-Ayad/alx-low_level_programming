#include "main.h"

/**
 * is_prime_number -  returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: number
 * Return: 1 prime, 0 even
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
