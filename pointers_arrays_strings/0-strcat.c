#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: receives char
 * @src: receives char
 * Return: returns char
 */

char *_strcat(char *dest, char *src)
{

	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
	dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
