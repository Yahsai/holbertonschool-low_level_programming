#include <stdio.h>
#include "main.h"

/**
* _isalpha - checks lowercase and uppercase
*
* @c: variable received
*
* Return: Always 0 (Success)
*/

int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
