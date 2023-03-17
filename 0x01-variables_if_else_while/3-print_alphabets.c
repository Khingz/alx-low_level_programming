#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 65;

	while (x < 91 || (x > 96 && x < 123))
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
