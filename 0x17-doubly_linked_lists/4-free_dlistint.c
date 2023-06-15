#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head == NULL)
		return;
	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
