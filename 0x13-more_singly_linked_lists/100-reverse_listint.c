#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	prev = next = NULL;
	current = *head;

	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
