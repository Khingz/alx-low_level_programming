#include <stddef.h>
#include <string.h>
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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * nmemb);
	if (arr == NULL)
	{
		return (NULL);
	}
	memset(arr, 0, nmemb * size);
	return (arr);
}
