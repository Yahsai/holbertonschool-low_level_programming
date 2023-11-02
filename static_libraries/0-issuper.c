#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: Receives integer
 * Return: Return integer
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}

	return (0);

}
