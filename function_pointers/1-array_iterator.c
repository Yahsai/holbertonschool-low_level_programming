#include <stdio.h>
#include "function_pointers.h"
#include <string.h>

/**
 * array_iterator - array organizer
 * @action: fucntion pointer
 * @size: size of the array
 * @array: array being created
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (action == NULL || array == NULL)
	{
		return;
	}

	for (a = 0; a < size; a++)
	{
	(*action)(array[a]);
	}
}
