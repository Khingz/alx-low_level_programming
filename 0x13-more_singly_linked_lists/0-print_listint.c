#include "lists.h"

/**
 * print_listint - print an int linked list
 * @h: head of linked list
 * Return: nodes counted
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
