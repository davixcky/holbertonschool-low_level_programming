#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (head <= head->next)
			return (head);

		head = head->next;
	}

	return (NULL);
}
