#include<stdio.h>
#include"main.h"
/**
 *print_alphabet- entry point
 *
 *Description: prints alphabet x10
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (c = 'a'; c <= 'z'; c++)
	{
		for (i = 1; i <= 10; i++)
		{
			putchar ((int)c);
		}
	}
	putchar ('\n');
}
