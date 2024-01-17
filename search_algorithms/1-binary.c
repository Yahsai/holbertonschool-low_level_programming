#include "search_algos.h"
/**
 * binary_search - function that search value in array
 * using binary search algorithm
 * @array: pointer to first element
 * @size: number of elements in array
 * @value: value to search
 * Return: index where value is located (success) or -1 (failure)
 **/
int binary_search(int *array, size_t size, int value)
{
	unsigned long int i, left, right, mid;

	i = 0;
	left = 0;
	right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");
		while (i < right)
		{
			printf("%i, ", array[i]);
			i++;
		}
		printf("%i\n", array[i]);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
		{
			left = mid + 1;
			i = left;
		}
		else
		{
			right = mid - 1;
			i = left;
		}
	}
	return (-1);
}
