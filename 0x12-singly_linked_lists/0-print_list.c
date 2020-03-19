#include "lists.h"

size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
	{
		printf("(nil)");
		return (0);
	}

	for (i = 0; h; i++)
	{
		printf("[%u] %s\n", h->len, (h->str != NULL) ? h->str : "(nil)");
		h = h->next;
	}

	return (i);
}