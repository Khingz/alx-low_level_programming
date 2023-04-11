#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concat string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *tmp;
	int i, j;
	int buffer_size;
	
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	buffer_size = strlen(s1) + strlen(s2);
	tmp = malloc(sizeof(char) * buffer_size + 1);
	if (tmp == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		tmp[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		tmp[i] = s2[j];
		i++;
		j++;
	}
	tmp[i] = '\0';
	return (tmp);
}
