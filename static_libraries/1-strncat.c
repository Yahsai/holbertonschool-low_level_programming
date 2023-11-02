#include "main.h"
#include <stdio.h>

/**
 *_strncat - conactenates two strings
 *@dest: receives pointer
 *@src: receives pointer
 *@n: receives integer
 *Return: character
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}
