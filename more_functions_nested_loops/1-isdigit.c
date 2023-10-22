#include <stdio.h>
#include "main.h"

/**
 *_isdigit - that checks for digit
 *@c: receives integer
 *Return: integer
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
	return (1);
	}

	return (0);
}
