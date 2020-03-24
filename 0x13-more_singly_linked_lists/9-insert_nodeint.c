#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i;
	listint_t *new;

	for (i = 0; *head != NULL; i++)
	{
		if (i + 1 == (int) idx)
		{
			new = malloc(sizeof(listint_t));
			if (new ==  NULL)
				return (NULL);

			new->n = n;
			new->next = (*head)->next;

			(*head)->next = new;

			return (new);
		}

		head = &(*head)->next;
	}

	return (NULL);
}
