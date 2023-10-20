#include"main.h"
/**
 * isalpha -returns 1 if c is lowecase and returns 0 otherwise
 * @c: is the imput character
 * Return: 2.
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		if (c >= 'a' && c <= 'z')
			return (0);
	}
}
