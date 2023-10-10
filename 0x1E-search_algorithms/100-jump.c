#include "search_algos.h"

void print_arr(int *arr, size_t left, size_t right);

/**
 * jump_search - performs jump search alogrithm
 * @array: array to search
 * @size: number of array
 * @value: value to search
 * Return: index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t lower, step, x, i;

	if (!array && size == 0)
		return (-1);
	step = (size_t)sqrt(size);
	for (i = 0; i < size && array[i] < value; i += step)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		lower = i;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", lower, i);
	if (i > size - 1)
		i = size - 1;
	else
		i = i;
	for (x = lower; x <= i; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
