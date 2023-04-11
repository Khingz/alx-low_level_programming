#include <stdlib.h>

/**
 * create_array - malloc and populate char
 *
 * @size: buffer size
 * @c: char to populate
 *
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tmp;

	if (size == 0)
	{
		return (NULL);
	}

	tmp = malloc(sizeof(char) * size);

	if (tmp == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		tmp[i] = c;
		i++;
	}
	return (tmp);
}
