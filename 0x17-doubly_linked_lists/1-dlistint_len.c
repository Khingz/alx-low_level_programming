#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;
	if (h == NULL)
		return (n);
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
