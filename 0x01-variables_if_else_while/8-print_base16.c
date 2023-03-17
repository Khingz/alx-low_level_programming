#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	for (x = 97; x <= 102; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
