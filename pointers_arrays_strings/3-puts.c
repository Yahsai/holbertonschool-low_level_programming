#include "main.h"
#include <stdio.h>

int _puts(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
}
