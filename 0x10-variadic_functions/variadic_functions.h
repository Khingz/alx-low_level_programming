#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
/**
 * struct data - Struct data
 *
 * @specifier: The specifier
 * @type: The specifier data type
 */
typedef struct data
{
	char *specifier;
	char *type;
} data_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif
