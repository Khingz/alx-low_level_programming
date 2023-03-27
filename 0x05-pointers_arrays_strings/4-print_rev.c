#include "main.h"

/**
 * print_rev - Entry point
 *
 * @s: string to reverse
 *
 * Return: Always void
 */
void print_rev(char *s)
{
	int len;
	char *i;

	len = _strlen(s);
	for (i = s + len; i >= s; i--)
	{
		_putchar(*i);
	}
	_putchar('\n');
}
