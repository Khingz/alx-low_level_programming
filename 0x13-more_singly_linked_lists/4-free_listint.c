#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: head of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_listint(head->next);
	free(head);
}
