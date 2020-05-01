#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t list
 *
 * @head: Head of the list
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free((void *) head);
		head = aux;
	}
}
