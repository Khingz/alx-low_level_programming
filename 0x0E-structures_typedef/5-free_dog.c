#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog
 * @d: dog instance to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
