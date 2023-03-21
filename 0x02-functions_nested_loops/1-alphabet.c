#include "main.h"

/**
 * main - Entry point
 *
 *description: print lower case alpahbets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
