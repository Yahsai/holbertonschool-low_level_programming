#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory
 * @dest: char
 * @src: char
 * @n: int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (a = 0; a < n; a++)
	{
	cdest[a] = csrc[a];
	}

	return (dest);
}
