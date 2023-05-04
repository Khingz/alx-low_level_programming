#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: char to be cinverted
 * Return: uint 0r 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, pow;
	int len;

	num = 0;
	if (*b == '\0' || b == NULL)
	{
		return (num);
	}
	pow = 1;
	len = strlen(b) - 1;
	while (len  >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			num = 0;
			return (num);
		}
		num += (b[len] - 48) * pow;
		pow = pow * 2;
		len--;
	}
	return (num);
}
