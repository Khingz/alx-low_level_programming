#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;
	int comma_space[] = {44, 32};

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i < j && j < k)
				{
					int x = 0;

					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

					while (x < 2)
					{
						if (i == 7 && j == 8 && k == 9)
						{
							break;
						}
						putchar(comma_space[x]);
						x++;
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
