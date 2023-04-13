#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of second string
 * Return: Pointer to concat string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *buffer;
	unsigned int len, i, j, len_s1;

	if (s1 == NULL)
	{
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		*s2 = '\0';
	}
	len_s1 = strlen(s1);
	len = sizeof(char) * len_s1 + n + 1;
	buffer = malloc(len);
	if (buffer == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		buffer[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		buffer[i] = s2[j];
		i++;
		j++;
	}
	buffer[i] = '\0';
	return (buffer);
}
