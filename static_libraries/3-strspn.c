#include <stdio.h>
#include "main.h"

/**
 *_strspn - gets lenght of a prefix string
 *@accept: receives pointer
 *@s: receives pointer
 *Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;
	unsigned int c = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				c++;
			}

			b++;
		}

		a++;
	}

	return (c);
}
