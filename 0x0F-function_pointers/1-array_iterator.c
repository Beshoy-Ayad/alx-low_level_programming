#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @array: array
 * @size: size
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
