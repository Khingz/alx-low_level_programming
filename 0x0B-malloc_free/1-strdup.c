#include <string.h>
#include <stdlib.h>

/**
 * _strdup - copies a string in memory
 *
 * @str: string to copied
 *
 * Return: pointer to the string or NULL
 */

char *_strdup(char *str)
{
	char *tmp;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	tmp = malloc(sizeof(char) * strlen(str) + 1);
	if (tmp == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i + 1] = '\0';
	return (tmp);
}
