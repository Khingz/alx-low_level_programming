#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers - print sequence of numbers using var func
 * @separator: seperating string
 * @n: number of int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list numbers;

	va_start(numbers, n);
	i = 0;
	while (i < n)
	{
		x = va_arg(numbers, int);
		printf("%i", x);
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(numbers);
	printf("\n");
}
