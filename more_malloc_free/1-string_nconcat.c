#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concenates string
 * @s1: pointer
 * @s2: pointer
 * @n: unsigned int
 * Return: conc
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1]; len1++)
		;

	for (len2 = 0; s2[len2] && len2 < n; len2++)
		;

	conc = malloc(sizeof(char) * (len1 + len2 + 1));

	if (conc == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		conc[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		conc[i + j] = s2[j];
	}

	conc[i + j] = '\0';
	return (conc);
}
