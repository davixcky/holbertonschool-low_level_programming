#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Add a new node at the beginning of a dlistint_t list
 *
 * @head: Head of the list
 * @n: Value of the new node
 *
 * Return: Pointer to the new node
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->next = *head;
	new_node->n = n;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
