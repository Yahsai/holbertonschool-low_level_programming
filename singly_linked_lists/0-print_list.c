#include "lists.h"
#include "stdio.h"
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: receives a pointer that points to a structure 
 * Return: all elements of a list_t list 
 */

size_t print_list(const list_t *h)
{
	size_t c;

	for (c = 0; h != NULL; c++)
	{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("{%d}%s\n", h->len, h->str);

	h = h->next;
	}

	return (c);
}
