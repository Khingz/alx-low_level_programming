#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_strings - print sequence of strings from a variadic function
 * @separator: separating string
 * @n: number of characters
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *s;

	va_start(str, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(str, char *);
		if (s == NULL)
		{
			printf("(nill)\n");
			exit(1);
		}
		i++;
	}
	va_end(str);
	va_start(str, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(str, char *);
		if (s == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(str);
	printf("\n");
}
