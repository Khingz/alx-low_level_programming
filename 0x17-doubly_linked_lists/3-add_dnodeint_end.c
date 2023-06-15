#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail, *new_node;

	if (head == NULL)
		return (NULL);

	tail = *head;
	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = new_node;
	tail->next->prev = tail;
	tail->next->next = NULL;
	return (new_node);
}
