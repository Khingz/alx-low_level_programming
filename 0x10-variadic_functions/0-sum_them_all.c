#include <stdarg.h>
/**
 * sum_them_all - sum integers
 * @n: number of ards
 * Return: integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list numbers;

	if (n == 0)
	{
		return (0);
	}

	va_start(numbers, n);
	sum = i = 0;
	while (i < n)
	{
		sum += va_arg(numbers, int);
		i++;
	}
	va_end(numbers);
	return (sum);
}

