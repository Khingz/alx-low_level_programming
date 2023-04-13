#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - Print array from max to min
 * @min: min int
 * @max: max int
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * ((max - min) + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
