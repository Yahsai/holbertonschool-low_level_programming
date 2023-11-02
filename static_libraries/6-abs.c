#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 *
 * @c: Receive integer c
 *
 * Return: Returns integer
 */

int _abs(int c)
{

	if (c < 0)
	{
	c = -1 * c;
	}

	return (c);
}
