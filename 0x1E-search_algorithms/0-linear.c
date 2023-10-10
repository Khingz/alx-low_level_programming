#include "search_algos.h"

/**
 * linear_search - performs linear search alogrithm
 * @array: array to search
 * @size: number of array
 * @value: value to search
 * Return: index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
