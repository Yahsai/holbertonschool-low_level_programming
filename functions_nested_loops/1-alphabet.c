#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - entry point
 *
 * Description: prints the alphabet with _putchar
 *
 * Return: void
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
