#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at a given imdex
 * @head: head of node
 * index: index of node
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	n = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (n == index)
		{
			return (head);
		}
		n++;
		head = head->next;
	}
	return (NULL);
}
