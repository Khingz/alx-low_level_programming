#include "main.h"

/**
 * print_rev - Entry point
 *
 * @s: string to reverse
 *
 * Return: Always void
 */

int strrlen(char *s);

void print_rev(char *s)
{
	int len;
	char *i;

	len = strrlen(s);
	for (i = s + len + 1; i >= s; i--)
	{
		_putchar(*i);
	}
	_putchar('\n');
}


/**
 * strrlen - check length string lenth
 *
 * @s: string to be checked
 *
 * Return: Always int (Success)
 */

int strrlen(char *s)
{
	int length;

	length = 0;
	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
