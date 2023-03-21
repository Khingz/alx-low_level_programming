#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always void
 */
void times_table(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			int product = i * j;

			if (product > 9)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else
			{
				if (product == 0 && j == 0)
				{
					_putchar(product + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(product + '0');
				}
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
