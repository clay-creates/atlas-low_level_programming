#include "search_algos.h"

/**
 * print_array - Prints an array
 * @array: Array to print
 * @start: Starting point
 * @end: Ending point
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in an array using a binary search
 * @array: Array to search in
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: The searched value or -1 on fail
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
