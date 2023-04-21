#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print according to specifier
 * @format: speifier
 * Return: Always void
 */

void print_all(const char * const format, ...)
{
	va_list var;
	int i;
	char *w_sep, *tmp_str;

	va_start(var, format);
	w_sep = "";
	i = 0;
	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", w_sep, va_arg(var, int));
					break;
				case 'f':
					printf("%s%f", w_sep, va_arg(var, double));
					break;
				case 'i':
					printf("%s%i", w_sep, va_arg(var, int));
					break;
				case 's':
					tmp_str = va_arg(var, char*);
					if (!tmp_str)
					{
						tmp_str = "(nil)";
					}
					printf("%s%s", w_sep, tmp_str);
					break;
				default:
					i++;
					continue;
			}
			w_sep = ", ";
			i++;
		}
	}
	va_end(var);
	printf("\n");
}
