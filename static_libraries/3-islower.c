#include <stdio.h>
#include "main.h"

/**
* _islower - checks if character is lower case
*
* @c:  Receives variable
*
* Return: Always 0 (Success)
*/

int _islower(int c)
{


	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
