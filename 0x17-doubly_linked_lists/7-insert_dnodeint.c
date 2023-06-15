#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given index
 * @h: head of list
 * @idx: index to insert
 * @n: number to inser
 * Return: NULL or address of node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int size, i;
	dlistint_t *new_n, *tmp;

	if (h == NULL)
		return (NULL);
	size = 0;
	tmp = *h;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}
	if (idx > size)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == size)
		return (add_dnodeint_end(h, n));
	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	tmp = *h;
	for (i = 0; i <= size; i++)
	{
		if (i == idx)
		{
			tmp->prev->next = new_n;
			new_n->prev = tmp->prev;
			new_n->next = tmp;
			tmp->prev = new_n;
			return (new_n);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
