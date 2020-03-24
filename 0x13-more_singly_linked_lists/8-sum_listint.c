#include "lists.h"

int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
	{
		sum += head->n;
	}


	return (sum);
}
