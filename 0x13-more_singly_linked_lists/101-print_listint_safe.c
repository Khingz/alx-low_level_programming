#include "lists.h"

size_t check_loop(const listint_t *head);
/**
 * print_listint_safe - prints linked list safe
 * @head: pointer to first note
 * Return: number of node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t unique_nodes, count;

	if (head == NULL)
	{
		return (0);
	}
	unique_nodes = check_loop(head);
	count = 0;
	if (unique_nodes == 0)
	{
		while (head != NULL)
		{
			count++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		return (count);
	}
	for (; count < unique_nodes; count++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	return (count);
}

/**
 * check_loop - checks unique node len
 * @head: pointer to the head of the llist
 * Return: number of node
 */
size_t check_loop(const listint_t *head)
{
	const listint_t *slow, *fast;
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

