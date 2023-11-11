#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array of integers
 *
 * @min: integer
 * @max: integer
 *
 * Return: arr
 */

int *array_range(int min, int max)
{
	int *arr;
	int size = max - min + 1;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
