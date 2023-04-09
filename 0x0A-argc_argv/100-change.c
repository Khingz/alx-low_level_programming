#include <stdlib.h>
#include <stdio.h>

int calculate_coin(int n);

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	int coin, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	coin = 0;

	if (cents < 0 || cents == 0)
	{
		printf("%i\n", coin);
	}

	coin = calculate_coin(cents);

	printf("%i\n", coin);
	return (0);
}

/**
 * calculate_coin -  calculate coin fir a given cent
 *
 * @cents: number of cents
 *
 * Return: an int, number of coins
 */
int calculate_coin(int cents)
{
	int coin = 0;

	while (cents >= 25)
	{
		coin++;
		cents -= 25;
	}
	while (cents >= 10)
	{
		coin++;
		cents -= 10;
	}
	while (cents >= 5)
	{
		coin++;
		cents -= 5;
	}
	while (cents >= 2)
	{
		coin++;
		cents -= 2;
	}
	while (cents >= 1)
	{
		coin++;
		cents--;
	}
	return (coin);
}
