#include "lists.h"

/**
 * add_node_end - adds singly list element ot the begining of the list
 * @head: pointer head
 * @str: string to be added
 * Return: pointer to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_el, *tmp;

	tmp = *head;
	new_el = malloc(sizeof(list_t));
	if (new_el == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		free(new_el);
		return (NULL);
	}
	new_el->str = strdup(str);
	new_el->len = strlen(str);
	new_el->next = NULL;
	if (*head == NULL)
	{
		*head = new_el;
		return (*head);
	}
	else
	{
		while (tmp != NULL)
		{
			if (tmp->next == NULL)
			{
				tmp->next = new_el;
				break;
			}
			tmp = tmp->next;
		}
	}
	return (new_el);
}
