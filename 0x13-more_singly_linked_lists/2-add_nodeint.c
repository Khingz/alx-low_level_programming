#include "lists.h"

/**
 * add_nodeint - add a node to the begining of a list
 * @head: head of node
 * @n: value of node->n
 * Return: pointer to note
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_el;

	new_el = malloc(sizeof(listint_t));
	if (new_el == NULL)
	{
		return (NULL);
	}
	new_el->n = n;
	new_el->next = *head;
	*head = new_el;
	return (new_el);
}
