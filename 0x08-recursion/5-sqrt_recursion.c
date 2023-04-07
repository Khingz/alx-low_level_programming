int sqrt_helper(int n,int lower_bound, int upper_bound);

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
	return (sqrt_helper(n, 1, n));
}

/**
 * sqrt_helper - check for square root
 *
 * @n: int to check square root
 * @upper_bound: int upper bound to be checked
 * @lower_bound: loer boound
 *
 * Return: Always 0 (Success)
 */
int sqrt_helper(int n, int lower_bound, int upper_bound)
{
	long double  middle_number = (upper_bound + lower_bound) / 2;
	long double sqrt = middle_number * middle_number;

	if (lower_bound > upper_bound)
	{
		return (-1);
	}

	if (sqrt ==  n)
	{
		return (middle_number);
	}

	if (sqrt > n)
	{
		return (sqrt_helper(n, lower_bound, middle_number - 1));
	}
	return (sqrt_helper(n, middle_number + 1, upper_bound));
}
