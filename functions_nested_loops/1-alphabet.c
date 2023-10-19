#include <stdio.h>
#include "main.h"

/**
 * *main - entry point
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar ((int)c);
	}
	putchar ('\n');
}
