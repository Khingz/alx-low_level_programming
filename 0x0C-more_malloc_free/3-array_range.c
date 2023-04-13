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
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * max + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = min;
	while (i <= max)
	{
		a[i] = j;
		j++;
		i++;
	}
	return (a);
}
