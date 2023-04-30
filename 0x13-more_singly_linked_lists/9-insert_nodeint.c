#include  "lists.h"

/**
 * insert_nodeint_at_index - inserts a node in a given index
 * @head: pointer to head of list
 * @idx: index of list to be inserted
 * @n: value to be inserted
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int indx;
	listint_t *new_el, *tmp_head;

	if (head == NULL)
	{
		return (NULL);
	}
	indx = 0;
	tmp_head = *head;
	new_el = malloc(sizeof(listint_t));
	if (new_el == NULL)
	{
		return (NULL);
	}
	new_el->n = n;
	if (n == 0)
	{
		new_el->next = *head;
		*head = new_el;
		return (new_el);
	}
	while (tmp_head->next != NULL)
	{
		if (indx == (idx - 1))
		{
			new_el->next = tmp_head->next;
			tmp_head->next = new_el;
			return (new_el);
		}
		indx++;
		tmp_head = tmp_head->next;
	}
	return (NULL);
}
