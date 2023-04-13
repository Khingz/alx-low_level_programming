#include <stddef.h>
#include <stdio.h>
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
	unsigned int len_s1, len_s2, len_buffer, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	if (n > len_s2)
	{
		n = len_s2;
	}
	len_buffer = len_s1 + n;
	buffer = malloc(len_buffer + 1);
	if (buffer == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j < len_buffer)
	{
		if (j < len_s1)
		{
			buffer[j] = s1[j];
		}
		else
		{
			buffer[j] = s2[j - len_s1];
		}
		j++;
	}
	buffer[j] = '\0';
	return (buffer);
}
