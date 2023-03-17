#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	char j;

	for (j = 96; j < 123; j++)
	{
		if (j < 91 || (j > 96 && j < 123))
		{
			putchar(j);
		}
	}

	for (i = 65; i < 91; i++)
	{
		if (i < 91 || (i > 96 && i < 123))
		{
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}
