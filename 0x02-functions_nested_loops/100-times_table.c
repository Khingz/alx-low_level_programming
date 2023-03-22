#include <stdio.h>

/**
 * print_times_table - Entry point
 *
 * @n: integer variable for time table count
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int x = 0;

	while (x <= n)
	{
		int y = 0;

		while (y <= n)
		{
			if (x == 0 && y == 0)
			{
				printf("%i", y);
			}
			else
			{
				if (y < 10 && y != n)
				{
					printf("   %i,", (x * y));
				}

				if (y < 100 && y > 10 && y != n)
				{
					printf("  %i,", (x * y));
				}

				if (y < 1000 && y > 100 && y != n)
				{
					printf(" %i,", (x * y));
				}
			}
			y++;
		}
		x++;
		printf("\n");
	}
}
