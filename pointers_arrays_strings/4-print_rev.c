#include "main.h"

/**
 * print_rev - prints reversed string
 * @s: receives pointer
 */

void print_rev(char *s)
{
	int i;
	int j;
	int a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		a++;
	}

	for (j = (a - 1); j >= 0; j--)
	{
	_pucthar(s[j]);
	}
	_putchar('\n');
}
