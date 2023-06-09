#include "lists.h"

/**
 * add_node - adds singly list element ot the begining of the list
 * @head: pointer head
 * @str: string to be added
 * Return: pointer to new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_el;
	int len;

	new_el = malloc(sizeof(list_t));
	if (new_el == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	new_el->str = strdup(str);
	new_el->len = len;
	new_el->next = *head;
	*head = new_el;
	return (new_el);
}
