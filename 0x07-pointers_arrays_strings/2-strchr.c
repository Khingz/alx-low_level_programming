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
	int i = 0;

	while (i >= '\0')
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
		i++;
	}
	return (0);
}
