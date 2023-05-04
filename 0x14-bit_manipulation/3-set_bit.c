#include "main.h"

/**
 * set_bit - set value of a bit at an index to 1.
 * @n: pointer to the bit.
 * @index: index to set the value
 * Return: return -1 0r 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}
