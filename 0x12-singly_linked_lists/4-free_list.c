#include "lists.h"

/**
 * free_list - frees list_t
 * @head: head of list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}
