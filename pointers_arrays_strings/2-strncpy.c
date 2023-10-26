#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy strings
 * @dest: receives charactr
 * @src: receives character
 * @n: receives character
 * Return: character
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);

}
