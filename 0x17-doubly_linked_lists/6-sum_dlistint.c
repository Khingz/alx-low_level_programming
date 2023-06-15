#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *tmp;

	sum = 0;
	if (head == NULL)
		return (sum);
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
