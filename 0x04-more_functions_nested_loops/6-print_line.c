#include "main.h"

/**
 * print_line - Entry point
 *
 * @n: number of times to print line
 * Return: Always void
 */
void print_line(int n)
{
	int x;

	x = 0;
	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		while (x < n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}
}
