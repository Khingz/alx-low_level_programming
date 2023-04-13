#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - creates an array
 * @nmemb: array length
 * @size: size of each array
 * Return: Pointer address or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int **arr;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * nmemb);
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb)
	{
		arr[i] = malloc(sizeof(int) * size);
		if (arr[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(arr[j]);
				j++;
			}
		}
		i++;
	}
	i = 0;
	while (i < nmemb)
	{
		j = 0;
		while (j < size)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
