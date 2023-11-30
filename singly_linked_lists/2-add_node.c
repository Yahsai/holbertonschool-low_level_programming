#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - creating new node
 * @head: double pointer
 * @str: pointer to string
 * Return: the address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int a;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	n = malloc(sizeof(list_t));

	if (node == NULL)
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
	n->next = *head;
	*head = n;

	return (n);
}
