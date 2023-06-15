#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size, x;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = head;
	size = 0;
	if (index == 0)
	{
		return (head);
	}
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}
	tmp = head;
	x = 0;
	while (x <= size)
	{
		if (x == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		x++;
	}
	return (NULL);
}
