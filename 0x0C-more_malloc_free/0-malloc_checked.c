#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocate a dynamic memory
 * @b: bytes to allocate
 * Return: Pointer to the memory or null
 */
void *malloc_checked(unsigned int b)
{
	int *buffer;

	buffer = malloc(b);
	if (buffer == NULL)
	{
		exit(98);
	}
	return (buffer);
}
