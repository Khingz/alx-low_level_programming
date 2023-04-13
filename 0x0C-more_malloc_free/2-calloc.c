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
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * nmemb);
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
