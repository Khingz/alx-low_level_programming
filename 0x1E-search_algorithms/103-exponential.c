#include "search_algos.h"

int binary_search(int *array, size_t size, int value);
int binary_helper(int *arr, int value, size_t left, size_t right);
void print_arr(int *arr, size_t left, size_t right);

/**
 * exponential_search - performs exponential search alogrithm
 * @array: array to search
 * @size: number of array
 * @value: value to search
 * Return: index or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	if (!array || size == 0)
		return (-1);
	bound = 1;
	while (bound < size && array[bound] < value)
	{
		bound *= 2;
	}
	return binary_helper(array, value, bound/2, min(bound + 1, size));
}



/**
 * binary_helper - binary helper function
 * @arr: array to search
 * @left: lower bound
 * @right: uper bound
 * @value: value to search
 * Return: -1 or index of number
 */
int binary_helper(int *arr, int value, size_t left, size_t right)
{
        size_t mid;

        if (left > right)
                return (-1);
        mid = left + (right - left) / 2;
        if (arr[mid] == value)
                return (mid);
        if (arr[mid] > value)
        {
                return (binary_helper(arr, left, (mid - 1), value));
        }
        else
        {
                return (binary_helper(arr, (mid + 1), right, value));
        }
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
