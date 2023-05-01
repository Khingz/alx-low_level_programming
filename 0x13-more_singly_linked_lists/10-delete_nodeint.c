#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node int at index
 * @head: pointer to head of node
 * @index: index of node
 * Return: value of deleted node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_head, *tmp, *del;
	unsigned int idx;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	idx = 0;
	temp_head = *head;
	if (index == 0)
	{
		tmp = temp_head->next;
		free(temp_head);
		*head = tmp;
		return (1);
	}
	while (temp_head != NULL)
	{
		if (idx == (index - 1))
		{
			del = temp_head->next;
			tmp = del->next;
			free(del);
			temp_head->next = tmp;
			return (1);
		}
		idx++;
		temp_head = temp_head->next;
	}
	return (-1);
}
