#include "main.h"

/**
 * _sqrt_recursion_helper - helper function
 * @n: number
 * @i: number
 * @j: number
 * Return: natural square root of a number.
 */

int  _sqrt_recursion_helper(int n, int i, int j)
{
        if (j < i)
        {
                return (-1);
        }
        else if ((i * i) == n)
        {
                return (i);
        }
        else if ((j * j) == n)
        {
                return (j);
        }
        else
        {
                return (_sqrt_recursion_helper(n, i + 1, j - 1));
        }
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursion_helper(n, 1, n));
	}
}

