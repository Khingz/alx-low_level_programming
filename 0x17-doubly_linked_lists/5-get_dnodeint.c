#include "lists.h"


/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */
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
