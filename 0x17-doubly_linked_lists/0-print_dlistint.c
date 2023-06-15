#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	if (h == NULL)
		return (n);
	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
