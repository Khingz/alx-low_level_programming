#include "lists.h"

/**
 * print_listint - print an int linked list
 * @h: head of linked list
 * Return: nodes counted
 */

size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *tmp;

	tmp = h;
	count = 0;
	if (h == NULL)
	{
		return (count);
	}
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
