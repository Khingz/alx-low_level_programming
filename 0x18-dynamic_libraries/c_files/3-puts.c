#include "main.h"

/**
 * _puts - Entry point
 * @s: string to be reversed
 * Return: void
 */
void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
