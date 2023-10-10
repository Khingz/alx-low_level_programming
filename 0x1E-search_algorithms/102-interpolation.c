#include "search_algos.h"

/**
 * interpolation_search - performs interpolated search alogrithm
 * @array: array to search
 * @size: number of array
 * @value: value to search
 * Return: index or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo, hi, po;

	if (!array || size == 0)
		return (-1);
	lo = 0;
	hi = size - 1;
	while ((array[hi] != array[lo]) && (value >= array[lo])
			&& (value <= array[hi]))
	{
		po = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
				(value - array[lo]));
		printf("Value checked array[%ld] = [%d]\n", po, array[po]);
		if (array[po] < value)
			lo = po + 1;
		else if (value < array[po])
			hi = po - 1;
		else
			return (po);
	}
	po = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
			(value - array[lo]));
	if (value == array[lo])
	{
		printf("Value checked array[%ld] = [%d]\n", po, array[po]);
		return (lo);
	}
	else
	{
		printf("Value checked array[%ld] is out of range\n", po);
		return (-1);
	}
}
