#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Node in the postion
 * @h: Pointer of the head
 * @n: Data integer
 * @idx: Position insert the new nod
 * Return: Direction of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *res_node = *h;
	/* unsigned int counter = 0 */

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (res_node == NULL)
			return (NULL);
		res_node = res_node->next;
	}

	if (res_node->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = res_node->next;
	new_node->prev = res_node;
	res_node->next->prev = new_node;
	res_node->next = new_node;

	return (new_node);
}
