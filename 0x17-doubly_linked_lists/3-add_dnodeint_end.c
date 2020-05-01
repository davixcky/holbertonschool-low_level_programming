#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 *
 * @head: Head of the list
 * @n: Value of the new node
 *
 * Return: Pointer to the new node
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *prev;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	for (prev = NULL; *head != NULL; head = &(*head)->next)
		prev = *head;

	new_node->prev = prev;
	new_node->next = NULL;
	new_node->n = n;
	*head = new_node;

	return (new_node);
}
