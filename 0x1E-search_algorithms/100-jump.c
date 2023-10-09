#include <math.h>
#include "search_algos.h"

/**
* jump_search - searches for a value in a sorted array of integers
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: the first index where value is located or -1 if
* not found or array is NULL
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t left = 0;
	size_t right = 0;

	if (array == NULL)
		return (-1);

	while (right < size && array[right] < value)
	{
		left = right;
		right += jump;
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	right = (right < size) ? right : size;

	while (left < right)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
		left++;
	}

	return (-1);
