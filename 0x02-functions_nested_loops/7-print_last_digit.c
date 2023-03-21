#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @x: integrer to check last number
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int x)
{
	int last_digit;
	
	if (x)
	{
		if (x < 0)
		{
			x = x * -1;
		}
		last_digit = x % 10;
		_putchar(last_digit + '0');

		return (last_digit);
	}
	return (1);
}
