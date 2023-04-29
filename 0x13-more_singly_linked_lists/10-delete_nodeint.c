#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node int at index
 * @head: pointer to head of node
 * @index: index of node
 * Return: value of deleted node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev_node, *temp_head;
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
			prev_node = temp_head;
		}
		if (idx == index)
		{
			tmp = temp_head->next;
			num = temp_head->n;
			free(temp_head);
			prev_node->next = tmp;
			return (num);
		}
		idx++;
		temp_head = temp_head->next;
	}
	return (-1);
}
