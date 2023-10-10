#include "search_algos.h"

int binary_helper(int *arr, size_t left, size_t right, int value);
void print_arr(int *arr, size_t left, size_t right);

/**
 * advanced_binary - performs binary search alogrithm
 * @array: array to search
 * @size: number of array
 * @value: value to search
 * Return: index or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (binary_helper(array, 0, (size - 1), value));
}


/**
 * binary_helper - binary helper function
 * @arr: array to search
 * @left: lower bound
 * @right: uper bound
 * @value: value to search
 * Return: -1 or index of number
 */
int binary_helper(int *arr, size_t left, size_t right, int value)
{
	size_t mid, result;

	if (left > right)
		return (-1);
	print_arr(arr, left, right);
	mid = left + (right - left) / 2;
	if ((mid == 0 || arr[mid - 1] < value) && arr[mid] == value)
	{
		return (mid);
	}
	if (arr[mid] >= value)
	{
		return (binary_helper(arr, left, (mid - 1), value));
	}
	else
	{
		return (binary_helper(arr, (mid + 1), right, value));
	}
	return (result);
}


/**
 * print_arr - prints an array
 * @arr: array to print
 * @left: lower bound
 * @right: right bound
 */
void print_arr(int *arr, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	i = left;
	while (i <= right)
	{
		if (i == right)
			printf("%d\n", arr[i]);
		else
			printf("%d, ", arr[i]);
		i++;
	}
}
