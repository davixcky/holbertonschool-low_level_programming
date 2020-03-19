#include "lists.h"

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;

	for(; head;)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}

}
