#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - create 2d array dynamically
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j, k;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			k = 0;
			while (k < i)
			{
				free(array[k]);
				k++;
			}
			free(array);
			return (NULL);
		}
	}
	k = 0;
	while (k < height)
	{
		j = 0;
		while (j < width)
		{
			array[k][j] = 0;
			j++;
		}
		k++;
	}
	return (array);
}
