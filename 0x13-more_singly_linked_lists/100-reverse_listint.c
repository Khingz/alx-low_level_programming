#include "lists.h"

/**
 * reverse_listint - reverses a singly linked list
 * @head: pointer to the for element
 * Return: pointer to first element of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;
	return (*head);
}
