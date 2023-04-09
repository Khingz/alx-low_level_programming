#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

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
		return (1);
	}

	i = 1;
	while (i < argc)
	{
		if (!isdigit(argv[i]))
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
