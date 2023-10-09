#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @param array: pointer to the first element of the array to search in
 * @param size: number of elements in array
 * @param value: value to search for
 * Return: the first index where value is located or -1 if not found or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
