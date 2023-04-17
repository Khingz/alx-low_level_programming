#include <stdlib.h>
#include <string.h>
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
	int strlen_name, strlen_owner;

	strlen_name = strlen(name);
	strlen_owner = strlen(owner);

	_dog = malloc(sizeof(dog_t));
	if (_dog == NULL)
	{
		return (NULL);
	}

	_dog->name = malloc(sizeof(char) * strlen_name + 1);
	if (_dog->name == NULL)
	{
		free(_dog);
		return (NULL);
	}
	_dog->owner = malloc(sizeof(char) * strlen_owner + 1);
	if (_dog->owner == NULL)
	{
		free(_dog->name);
		free(_dog);
		return (NULL);
	}
	strcpy(_dog->name, name);
	_dog->name[strlen_name + 1] = '\0';
	strcpy(_dog->owner, owner);
	_dog->owner[strlen_owner + 1] = '\0';
	_dog->age = age;
	return (_dog);
}
