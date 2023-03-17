#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 65; i < 123; i++)
	{
		if (i < 9 || (i > 97 && i < 123))
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
