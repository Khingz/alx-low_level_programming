#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * @n: ntegar starting point
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		count_backward(n);
	}
	else if (n <= 98 && n >= 0)
	{
		count_forward(n);
	}
	else
	{
		count_negative(n);
	}
}

void count_backward(int a)
{
	int x = a;

	while (x > 98)
	{
		int digit_length = get_int_length(a);
		int i;

		while (i < digit_length)
		{
			_putchar(x % 10 + '0');
		}
		if 
	}
}
