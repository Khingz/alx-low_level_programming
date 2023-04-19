#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

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
	if (opt == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	result = opt(atoi(argv[1]), atoi(argv[3]));
	printf("%i\n", result);
	return (0);
}
