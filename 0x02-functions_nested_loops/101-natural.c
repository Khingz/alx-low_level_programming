#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, sum;

	sum = x = 0;
	while (x < 1024)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
		{
			sum += x;
		}
		x++;
	}
	printf("%i\n", sum);
	return (0);
}
