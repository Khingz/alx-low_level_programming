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
	int result;
	int (*opt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	opt = get_op_func(argv[2]);
	if (opt == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((atoi(argv[3]) == 0 && *argv[2] == '/') || (*argv[2] == '%' && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = opt(atoi(argv[1]), atoi(argv[3]));
	printf("%i\n", result);
	return (0);
}
