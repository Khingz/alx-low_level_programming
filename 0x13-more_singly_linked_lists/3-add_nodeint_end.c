#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of a string
 * @head: head of list
 * @n: int to add
 * Return: pointer to new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *new_el;

	new_el = malloc(sizeof(listint_t));
	if (new_el == NULL)
	{
		return (NULL);
	}
	new_el->n = n;
	new_el->next = NULL;
	if (*head == NULL)
	{
		*head = new_el;
		return (new_el);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_el;
	return (new_el);
}
