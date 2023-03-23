#include "main.h"

/**
 * print_number - Entry point
 *
 * @n: integer to print
 * @a: checks int length
 * Return: Always 0 (Success)
 */

int get_digit_length(int a);

void print_number(int n)
{
	int x, y, tmp_n, length, divisor;

	if (n < 0)
	{
		tmp_n = n;
		n = n * (-1);
	}

	length = (get_digit_length(n));
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
 * get_digit_length - Entry point
 *
 * @a: get int to check length
 *
 * Return: Always 0 (Success)
 */
int get_digit_length(int a)
{
	int length;

	length = 1;
	while ((a / 10))
	{
		length++;
		a /= 10;
	}
	return (length);
}
