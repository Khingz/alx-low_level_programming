int check_prime(int n, int d);

/**
 * is_prime_number - Entry point
 *
 * @n: int to chec
 *
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (check_prime(n, (n - 1)));
}

/**
 * check_prime - Entry point
 *
 * @n: int to chec
 * @d: divisor
 *
 * Return: Always 0 (Success)
 */
int check_prime(int n, int d)
{
	if (d == 1)
	{
		return (1);
	}

	if (n % d == 0)
	{
		return (0);
	}
	return (check_prime(n, (d - 1)));
}
