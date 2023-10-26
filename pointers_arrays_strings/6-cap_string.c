#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all words
 * @str: receives character
 * Return: character
 */

char *cap_string(char *str)
{
	int i, j;
	char sub[13] = {' ', '\n', '\t', ',', '.', '!', '?', '"',
'(', ')', '{', '}', ';'};

	for (i = 0 ; str[i] != '\0'; i++)
	{
	if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}

	for (j = 0; j < 13; j++)
	{
		if (str[i] == sub[j])
		{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] -= 32;
		}
		}
	}
	}

	return (str);
}
