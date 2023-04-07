int sqrt_helper(int n, int upper_bound);

/**
 * _sqrt_recursion - Entry point
 *
 * @n: int to check square root
 *
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (n);
	}
	return (sqrt_helper(n, n));
}

/**
 * sqrt_helper - check for square root
 *
 * @n: int to check square root
 * @upper_bound: int upper bound to be checked
 *
 * Return: Always 0 (Success)
 */
int sqrt_helper(int n, int upper_bound)
{
	long double  middle_number = upper_bound / 2;
	long double sqrt = middle_number * middle_number;

	if (upper_bound < 2)
	{
		return (-1);
	}

	if (sqrt ==  n)
	{
		return (middle_number);
	}

	if (sqrt >  n)
	{
		return (sqrt_helper(n, upper_bound - 1));
	}
	return (-1);
}
