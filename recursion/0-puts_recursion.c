#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints in recursion
 * @s: receives pointer
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
	putchar(*s);
	_puts_recursion(s + 1);
	}

	else
	{
	putchar('\n');
	}

}
