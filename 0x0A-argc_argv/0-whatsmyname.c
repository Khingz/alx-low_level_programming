#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * return: always zero
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		return (1);
	}
	printf("%s\n", argv[0]);
	return (0);
}
