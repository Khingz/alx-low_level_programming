/**
 * int_index - checks for the index of a compared string
 * @array: array to check
 * @size: size of array
 * @cmp: compare function
 * Return: Index of matching element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (!array && !size && !cmp)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		if ((*cmp)(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
