#include <stdio.h>

/**
 * print_diagsums - Entry point
 *
 * @a: arr
 * @size: arr size
 *
 * Return: Always void
 */
void print_diagsums(int *a, int size)
{
	int i, j, diag_1, diag_2;

	diag_1 = diag_2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diag_1 += *(a[i][j]);
			}

			if ((j + i) == (size - 1))
			{
				diag_2 += *(a[i][j]);
			}
		}
	}
	printf("%i, %i\n", diag_1, diag_2);
}
