#include "lists.h"

/**
 * find_listint_loop - checks the begigning of a loop in a linked list
 * @head: pointer to the head of the list
 * Return: return address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
	{
		return (0);
	}

	slow = head->next;
	fast = (head->next)->next;
	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (NULL);
}
