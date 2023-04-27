#include "lists.h"
/**
 * print_list - prints element of a singly linked list
 * @h: head of linked list
 * Return: number of notes printed
 */
size_t print_list(const list_t *h)
{
	size_t count;

	if (h == NULL)
	{
		return (-1);
	}
	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
