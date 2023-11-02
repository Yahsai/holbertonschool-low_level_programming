#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints lenght
 * @s: receives s character
 * Return: returns int
 */

int _strlen(char *s)
{

	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	return (count);
}
