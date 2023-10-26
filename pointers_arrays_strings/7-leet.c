#include <stdio.h>
#include "main.h"

/**
 * leet - encodes string
 * @str: Receives pointer
 * Return: character
 */

char *leet(char *str)
{

	int i;
	int j;
	char let[10] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char sub[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == let[j])
			{
				str[i] = sub[j];
			}
		}
	}

	return (str);
}
