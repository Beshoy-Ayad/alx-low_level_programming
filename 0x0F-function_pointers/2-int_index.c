#include "function_pointers.h"

/**
 * int_index - integer search
 * @array: array to search in
 * @size: the size of the array
 * @cmp: compare values *
 * Return: return 0, -1 if no element or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
