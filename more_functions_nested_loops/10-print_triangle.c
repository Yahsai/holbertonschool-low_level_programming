#include "main.h"
#include <stdio.h>

/**
 *print_triangle - prints triangle
 *@size: size triangle
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		putchar('\n');
	}

	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 1; b--)
			{

				putchar(' ');

			}


			for (c = 0; c <= a; c++)
			{

				putchar('#');

			}

			putchar('\n');
		}
	}
}

