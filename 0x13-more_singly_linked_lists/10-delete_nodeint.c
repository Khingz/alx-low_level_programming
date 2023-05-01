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
	int num;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	idx = 0;
	temp_head = *head;
	if (index == 0)
	{
		tmp = temp_head->next;
		num = temp_head->n;
		free(temp_head);
		*head = tmp;
		return (num);
	}
	while (temp_head != NULL)
	{
		if (idx == (index - 1))
		{
			del = temp_head->next;
			tmp = del->next;
			num = del->n;
			free(temp_head->next);
			temp_head->next = tmp;
			return (num);
		}
		idx++;
		temp_head = temp_head->next;
	}
	return (-1);
}
