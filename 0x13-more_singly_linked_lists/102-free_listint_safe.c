#include "lists.h"

size_t check_nodes(listint_t *head);
/**
 * free_listint_safe - free nodes in a list
 * @h: pointer to head of list
 * Return: size of list freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count, idx;
	listint_t *tmp;

	idx = 0;
	if (h == NULL || *h == NULL)
	{
		return (idx);
	}
	count = check_nodes(*h);
	if (count == 0)
	{
		while (*h)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			count++;
		}
		return (count);
	}
	while (idx < count)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		idx++;
	}
	*h = NULL;
	return (idx);
}

/**
 * check_nodes - checks unique node len
 * @head: pointer to the head of the llist
 * Return: number of node
 */
size_t check_nodes(listint_t *head)
{
	listint_t *slow, *fast;
	size_t count;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;
	count = 1;
	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				count++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				count++;
				slow = slow->next;
			}

			return (count);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}
