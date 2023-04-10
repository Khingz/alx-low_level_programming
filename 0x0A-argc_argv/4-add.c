#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int _isdigit(char *s);

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc < 2)
	{
		printf("%i\n", sum);
		return (0);
	}

	i = 1;
	while (i < argc)
	{
		if (_isdigit(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%i\n", sum);
	return (0);
}

/**
 * _isdigit - checks if a string is a number
 *
 * @s: string to be checked
 *
 * Return: 0 or 1;
 */

int _isdigit(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (!isdigit(s[i]))
		{
			return (1);
		}
		i++;
	}
	return (0);
}
