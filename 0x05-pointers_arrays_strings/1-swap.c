#include "main.h"

/**
 * main - Entry point
 *
 * @a: pointer 1
 * @b: pointer 2
 *
 * Return:Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
