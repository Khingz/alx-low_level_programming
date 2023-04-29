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
	listint_t *new_el, *tmp, *tmp_head;

	if (head == NULL || *head == NULL)
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
	if (*head == NULL && n == 0)
	{
		*head = new_el;
		new_el->next = NULL;
	}
	while (tmp_head != NULL)
	{
		if (indx == (idx - 1))
		{
			tmp = tmp_head;
		}
		if ((indx == idx) && tmp_head != NULL)
		{
			new_el->next = tmp_head;
			tmp->next = new_el;
			return (new_el);
		}
		indx++;
		tmp_head = tmp_head->next;
	}
	free(new_el);
	return (NULL);
}
