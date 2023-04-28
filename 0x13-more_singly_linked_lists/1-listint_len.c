#include "lists.h"

/**
 * listint_len - print an int linked list
 * @h: head of linked list
 * Return: nodes counted
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
	{
		return (count);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
