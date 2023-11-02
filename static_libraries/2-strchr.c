#include "main.h"
#include <stdio.h>

/**
 *_strchr - locates string
 *@s: receives pointer
 *@c: receives char
 *Return: character
 */

char *_strchr(char *s, char c)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == c)
		{
			return (s + i);
			s++;
		}

		if (*s == c)
		{
			return (s +i);
		}
	}

	return (0);
}
