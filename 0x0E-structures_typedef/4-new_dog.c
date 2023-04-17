#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog instance
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog;

	_dog = malloc(sizeof(dog_t));
	if (_dog == NULL)
	{
		return (NULL);
	}
	_dog->name = name;
	_dog->age = age;
	_dog->owner = owner;
	return (_dog);
}
