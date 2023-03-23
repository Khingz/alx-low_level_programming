#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Return: void (Success)
 */
void print_numbers(void)
{
	int x;

	x = 49;
	while (x <= 57)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
