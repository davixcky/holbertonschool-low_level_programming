#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *
 * @h: Head of the list
 * @idx: Position for insert the new node
 * @n: Value of the node
 *
 * Return: Pointer to the new node
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t index;
	dlistint_t *current, *new_node, *prev;

	if (h == NULL)
		return (NULL);

	for (index = 0; *h != NULL; h = &(*h)->next, index++)
		if (index == idx)
			break;

	if (index != idx)
		return (NULL);

    new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

    new_node->n = n;

	/*
	 * prev current next
	 * prev->next = new_node
	 * next->prev = new_node
	 *
	 * new_node->prev = prev
	 * new_node->next = next
	 *
	 * 0 -> prev
	 * 1 -> next
	 * 2
	 * 3
	 *
	 * idx = 1, n = 12
	 *
	 * 0  -> prev
	 * 12 -> new_node
	 * 1  -> next
	 * 2
	 * 3
	 */

	prev = *h ? (*h)->prev : NULL;
    current = *h;

    if (prev)
	    prev->next = new_node;
    else
        *h = new_node;

    if (current)
        current->prev = new_node;

    new_node->next = current;
    new_node->prev = prev;

	return (current);
}
