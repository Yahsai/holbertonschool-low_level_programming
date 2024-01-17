#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located (success) or -1 (failed)
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned long int i = 0;

	while (i < size)
	{
		if (array[i] != value)
		{
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
			i++;
		}
		else if (array[i] == value)
		{
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
			return (i);
		}
	}
	return (-1);
}
