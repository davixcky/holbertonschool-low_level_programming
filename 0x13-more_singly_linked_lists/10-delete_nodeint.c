#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i;
	listint_t *tmp;

	for (i = -1; *head != NULL; i++)
	{
		if (i + 1 == (int) index)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
			return (1);
		}

		head = &(*head)->next;
	}

	return (-1);
}
