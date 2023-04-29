#include "lists.h"

/**
 * free_listint2 - frees listint_t lists and set head to null
 * @head: head of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *tmp;

	if (head == NULL)
	{
		return;
	}
	temp = *head;
	while (temp != NULL)
	{
		tmp = temp->next;
		free(temp);
		temp = tmp;
	}
	*head = NULL;
}
