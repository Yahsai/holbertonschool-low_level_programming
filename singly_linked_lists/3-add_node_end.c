#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add new node at the end
 * @head: pointer to another pointer
 * @str: pointer to string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *temp;
	unsigned int a;

	n = malloc(sizeof(list_t));

	if (n == NULL)
	{
		return (NULL);
	}

	n->str = strdup(str);

	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
		for (a = 0; str[a] != '\0'; a++)
		{
		}
	n->len = a;
	n->next = NULL;

		if (*head == NULL)
		{
			*head = n;
		}
		else
		{
			temp = *head;
			while (temp->next != 0)
			{
				temp = temp->next;
			}
			temp->next = n;
		}
	return (n);
}
