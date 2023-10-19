#include<stdio.h>
#include "main.h"
/**
 *main- entry point
 *
 *Return: always 0
 */
int main(void)
{
	char*c;

	int i;
	c = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar (c[i]);
	}
_putchar('\n');
return(0);
}
