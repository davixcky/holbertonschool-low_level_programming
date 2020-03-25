#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	if (head == NULL)
		return (NULL);

	slow = head;
	fast = head->next;

	while (slow != fast)
	{
		if (fast->next == NULL || slow == NULL)
			return (NULL);

		slow = slow->next;
		fast = head->next;
	}

	return (slow);
}
