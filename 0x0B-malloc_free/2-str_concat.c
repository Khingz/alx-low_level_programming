#include <string.h>
#include <stdlib.h>

int check_buffer(char *s1, char *s2);
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

	if (s1 == NULL && s2 == NULL)
	{
		tmp = malloc(sizeof(char) * 1);
		*tmp = '\0';
		return (tmp);
	}
	buffer_size = check_buffer(s1, s2);
	tmp = malloc(sizeof(char) * buffer_size + 1);
	if (tmp == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1 != NULL && s1[i] != '\0')
	{
		tmp[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 != NULL && s2[j] != '\0')
	{
		tmp[i] = s2[j];
		i++;
		j++;
	}
	tmp[i] = '\0';
	return (tmp);
}

/**
 * check_buffer - check buffer size
 * @s1: str 1;
 * @s2: str 2;
 * Return: int
 */
int check_buffer(char *s1, char *s2)
{
	int buffer;

	if (s1 == NULL)
	{
		buffer = strlen(s2);
	}
	else if (s2 == NULL)
	{
		buffer = strlen(s1);
	}
	else
	{
		buffer = strlen(s1) + strlen(s2);
	}
	return (buffer);
}
