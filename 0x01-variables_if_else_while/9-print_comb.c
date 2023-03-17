#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int space_comma[2] = {44, 32};

	for (i = 0; i <= 9; i++)
	{
		int x;
		putchar(i + '0');
		x = 0;
		while (x < 2)
		{
			if (i == 9)
			{
				break;
			}
			else
			{
				putchar(space_comma[x]);
				x++;
			}
		}
	}

	putchar('\n');

	return (0);
}
