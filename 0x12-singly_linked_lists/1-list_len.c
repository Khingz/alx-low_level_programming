#include "lists.h"

/**
 * list_len - check the numner of items in a link list
 * @h: link list
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
