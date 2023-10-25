#include"main.h"

/**
 * _strlen - prints lenght
 *@s: receives s character
 *Return: int
 */

int _strlen (char *s)
{

	int i;
	int count = 0;

	for (i = 0; s[i] != '\0' ; i++);
	{
		count++;
	}
	return(count);
}
