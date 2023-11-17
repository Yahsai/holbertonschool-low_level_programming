#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - name printing function
 * @name: pointer to name 
 * @f: function to name 
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f (name);
}
