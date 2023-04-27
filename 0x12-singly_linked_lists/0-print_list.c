#include "lists.h"
/**
 * print_list - prints element of a singly linked list
 * @h: head of linked list
 * Return: number of notes printed
 */
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *tmp;

	if (h == NULL)
	{
		return (0);
	}
	tmp = h;
	count = 0;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
		count++;
		tmp = tmp->next;
	}
	return (count);
}
