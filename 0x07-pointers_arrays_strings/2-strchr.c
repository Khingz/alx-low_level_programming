#include <stddef.h>

/**
 * _strchr - Entry point
 *
 * @s: string to be searched
 * @c: character to be searched
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	char *tmp;

	tmp = s;
	while (*tmp)
	{
		if (*tmp == c)
		{
			return (tmp);
		}
		tmp++;
	}

	return (NULL);
}
