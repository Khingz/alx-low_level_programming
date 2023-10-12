#include "search_algos.h"

/**
 * jump_list - performs jump search alogrithm
 * @list: list to search
 * @size: number of array
 * @value: value to search
 * Return: index or -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, i;
	listint_t *temp;

	printf("Hello");
	if (list == NULL || size == 0)
		return (NULL);
	temp = list;
	step = (size_t)(sqrt(size));
	return (list);
}
