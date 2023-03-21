#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * @n: ntegar starting point
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		int i = n;

		while (i < 99)
		{
			printf("%i, ", i);
			i++;
		}
	}
	else if (n > 98)
	{
		int i = n;

		while (i >= 98)
		{
			printf("%i, ", i);
			i--;
		}
	}
	printf("\n");
}
