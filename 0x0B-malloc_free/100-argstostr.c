#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - concat arr of stirngs
 * @ac: arr count
 * @av: array vector
 * Return: Pointerto array or NULL
 */
char *argstostr(int ac, char **av)
{
	int str_len, i, j, k;
	char *buffer;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	i = str_len = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str_len++;
			j++;
		}
		i++;
	}
	buffer = malloc(sizeof(char) * str_len + ac + 1);
	if (buffer == NULL)
	{
		return (NULL);
	}
	i = 0, k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			buffer[k] = av[i][j];
			j++;
			k++;
		}
		buffer[k] = '\n';
		k++;
		i++;
	}
	buffer[k] = '\0';
	return (buffer);
}
