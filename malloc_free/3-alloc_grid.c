#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*alloc_grid - 2 dimesional array
*@width: receives width
*@height: receives height
*Return: integer
*/

int **alloc_grid(int width, int height)
{

	int **dup;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
	return (NULL);

	dup = malloc(sizeof(int *) * height);

	if (dup == NULL)
	return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
	dup[hgt_index] = malloc(sizeof(int) * width);

	if (dup[hgt_index] == NULL)
	{
	for (; hgt_index >= 0; hgt_index--)
	free(dup[hgt_index]);

	free(dup);
	return (NULL);
	}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
	for (wid_index = 0; wid_index < width; wid_index++)
	dup[hgt_index][wid_index] = 0;
	}

	return (dup);
}
