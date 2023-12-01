### Holberton 
## Doubly Linked List Functions

This repository contains a set of C functions for manipulating doubly-linked lists of type dlistint_t. Each function serves a specific purpose in managing and manipulating such lists.


1. Print List
Function:

c

size_t print_dlistint(const dlistint_t *h);

Prints all the elements of a dlistint_t doubly-linked list and returns the number of nodes.

2. List Length
Function:

c

size_t dlistint_len(const dlistint_t *h);

Returns the number of elements in a linked dlistint_t list.

3. Add Node at the Beginning
Function:

c

dlistint_t *add_dnodeint(dlistint_t **head, const int n);

Adds a new node at the beginning of a dlistint_t list and returns the address of the new element, or NULL if it failed.

4. Add Node at the End
Function:

c

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

Adds a new node at the end of a dlistint_t list and returns the address of the new element, or NULL if it failed.

5. Free List
Function:

c

void free_dlistint(dlistint_t *head);

Frees a dlistint_t list.

6. Get Node at Index
Function:

c

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

Returns the nth node of a dlistint_t linked list, where the index starts at 0. If the node does not exist, returns NULL.

7. Sum List
Function:

c

int sum_dlistint(dlistint_t *head);

Returns the sum of all the data (n) of a dlistint_t linked list. If the list is empty, returns 0.

8. Insert at Index
Function:

c

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

Inserts a new node at a given position in the list. Returns the address of the new node, or NULL if it failed. If it's not possible to add the new node at the specified index, it does not add the node and returns NULL.

9. Delete at Index
Function:

c

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

Deletes the node at the specified index of a dlistint_t linked list. Returns 1 if it succeeded, -1 if it failed. Index starts at 0.
