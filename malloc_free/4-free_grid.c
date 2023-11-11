#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *free_grid - frees a 2 dimesional grid
 *@grid: receives grid
 *@height: receives height
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	free(grid[a]);
	free(grid);
}
