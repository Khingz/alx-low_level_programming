#include "main.h"

/**
 * print_number - Entry point
 * @n: integer to print
 *
 * Return: Always 0 (Success)
 */

int digit_length(int n);

void print_number(int n)
{
	int x, y, tmp_n, length, divisor;

	if (n < 0)
	{
		tmp_n = n;
		n = n * (-1);
	}

	length = digit_length(n);
	divisor = 1;
	x = 0;
	while (x < length - 1)
	{
		divisor *= 10;
		++x;
	}

	if (tmp_n < 0)
	{
		_putchar('-');
	}
	y = 0;
	while (y < length)
	{
		_putchar(n / divisor + '0');
		n %= divisor;
		divisor /= 10;
		y++;
	}
}


/**
 * digit_length - length of digit
 *
 * @n: get int to che
 *
 * Return: Always 0 (Success)
 */
int digit_length(int n)
{
	int length;

	length = 1;
	while ((n / 10))
	{
		length++;
		n /= 10;
	}
	return (length);
}
