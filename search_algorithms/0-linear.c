#include "search_algos.h"

/**
 * linear_search - Searches for a value using linear search
 * @array: Array to be searched
 * @size: Size of array
 * @value: Value to be searched for
 *
 * Return: Number searched or -1 on fail
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int)i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
