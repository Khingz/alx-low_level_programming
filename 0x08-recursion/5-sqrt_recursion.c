/**
 * _sqrt_recursion - Entry point
 *
 * @n: int to check square root
 *
 * Return: Always 0 (Success)
 */
int sqrt_helper(int n, int upper_bound);

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
 * @upper_bound: upper bound to be checked
 *
 * Return: Always 0 (Success)
 */
int sqrt_helper(int n, int upper_bound)
{
	unsigned int middle_number = upper_bound / 2;
	unsigned int sqrt = middle_number * middle_number;

	if (1 > upper_bound)
	{
		return (-1);
	}

	if (sqrt == (unsigned int) n)
	{
		return (middle_number);
	}

	if (sqrt > (unsigned int) n)
	{
		return (sqrt_helper(n, upper_bound - 1));
	}
	return (-1);
}
