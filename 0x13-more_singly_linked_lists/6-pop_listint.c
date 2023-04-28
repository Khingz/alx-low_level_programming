#include "lists.h"

/**
 * pop_listint - remove forst element of list
 * @head: head of llist
 * Return: value poped out
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;
	if (head == NULL)
	{
		return (0);
	}
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
