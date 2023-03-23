#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * @n: diagonal height and length
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int x, y;

	x = 0;
	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		while (x < n)
		{
			y = 0;
			while (y < n)
			{
				if (y == x)
				{
					_putchar('\\');
					break;
				}
				else
				{
					_putchar(' ');
				}
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
}
