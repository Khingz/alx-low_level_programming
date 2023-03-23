#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 0;
	while (x <= 100)
	{
		if ((x % 3) == 0 && (x % 5) == 0)
		{
			if (x >= 100)
			{
				printf("FizzBuzz");
			}
			printf("FizzBuzz ");
		}
		else if ((x % 3) == 0)
		{
			if (x >= 100)
			{
				printf("Fizz");
			}
			printf("Fizz ");
		}
		else if ((x % 5) == 0)
		{
			if (x >= 100)
			{
				printf("Buzz");
			}
			printf("Buzz ");
		}
		else
		{
			printf("%i ", x);
		}
		x++;
	}
	printf("\n");
	return (0);
}
