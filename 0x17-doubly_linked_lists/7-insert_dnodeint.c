#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new_node node at a given position
 *
 * @h: Head of the list
 * @idx: Position for insert the new_node node
 * @n: Value of the node
 *
 * Return: Pointer to the new_node node
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (current = *h, i = 0; current && i < idx; i++)
		current = current->next;

	if (!current && i == idx)
		return (add_dnodeint_end(h, n));
	else if (current)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		current->prev->next = new_node;
		current->prev = new_node;

		new_node->prev = current->prev;
		new_node->next = current;

		return (new_node);
	}

	return (NULL);
}
