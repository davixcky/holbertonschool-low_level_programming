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
	dlistint_t *new_node, *current;

	if (h == NULL)
		return (NULL);

	for (index = 0; *h != NULL; h = &(*h)->next, index++)
		if (index == idx)
			break;

	if (index == idx + 1 || index != idx)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	current = *h ? (*h)->prev : NULL;

	new_node->prev = current;
	new_node->next = current ? current->next : *h;

	if (current)
		current->next = new_node;
	else
		*h = new_node;

	return (new_node);
}
