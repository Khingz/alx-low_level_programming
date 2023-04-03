#include <stddef.h>
#include "main.h"

/**
 * _strchr - Entry point
 *
 * @s: string to be searched
 * @c: character to be searched
 * Return: Pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int n;

	while (1)
	{
		n = *s++;

		if (n == c)
			return (s - 1);
		else if (n == 0)
			return (NULL);
	}
}
