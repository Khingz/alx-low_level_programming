#include "lists.h"

/**
 * print_listint_safe
 * @head: pointer to first note
 * Return: number of node
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *tmp;
	size_t count;

	if (head != NULL)
	{
		exit(98);
	}
	tmp = head;
	count = 0;
	while (tmp != NULL)
	{
		if (count == 0)
		{
			printf("[%p], %i", *head, tmp->n);
			count++;
			tmp= tmp->next;
			continue;
		}
		printf("[%p] %i", *tmp, tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
