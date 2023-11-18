#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - index intergers for array
 * @array: array to be analyzed
 * @size: elements of array
 * @cmp: pointer function
 * Return: elements
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == 0 || cmp == 0)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
		{
		return (a);
		}
	}
	return (-1);
}
