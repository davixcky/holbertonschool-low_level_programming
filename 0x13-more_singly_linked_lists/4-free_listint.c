#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *aux;

	for (; head != NULL;)
	{
		aux = head;
		head = head->next;
		free(aux);
	}

}
