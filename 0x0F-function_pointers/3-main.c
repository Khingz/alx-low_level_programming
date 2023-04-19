#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result, n_1, n_2;
	int (*opt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n_1 = atoi(argv[1]);
	n_2 = atoi(argv[3]);
	opt = get_op_func(argv[2]);
	if (opt == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((n_2 == 0 && *argv[2] == '/') || (*argv[2] == '%' && n_2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = opt(n_1, n_2);
	printf("%i\n", result);
	return (0);
}
