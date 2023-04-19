#include <stddef.h>

/**
 * array_iterator - performs several function om an array
 * @array: array to perfor m action
 * @size: size of array
 * @action: function to determine action to be performed
 * Return: void always
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		i = 0;
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
