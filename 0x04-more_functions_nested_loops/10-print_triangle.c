#include "main.h"

/**
 * print_triangle - Entry point
 *
 * @size: length and width of pyramind
 * Return: Always void
 */
void print_triangle(int size)
{

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		x = 0;
		while (x < size)
		{
			y = 0;
			while (y < size)
			{
				if (y >= (size - 1 - x))
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
				y++;
			}
			x++;
			_putchar('\n');
		}
	}
}
