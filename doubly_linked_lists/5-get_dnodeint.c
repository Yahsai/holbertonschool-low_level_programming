#include "lists.h"

/**
 * get_dnodeint_at_index - Return the node
 * @head: Pointer
 * @index: Node index
 * Return: Direction of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		counter++;
	}
	return (head);
}
