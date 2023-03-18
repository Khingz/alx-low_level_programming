#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	int comma_space[] = {44, 32};

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i < j)
			{
				int x = 0;

				putchar(i + '0');
				putchar(j + '0');

				while (x < 2)
				{
					if (i == 8 && j == 9)
					{
						break;
					}

					putchar(comma_space[x]);
					x++;
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
