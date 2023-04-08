#include <ctype.h>

/**
 * _isalpha - Entry point
 *
 * @c: integer to be checked
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
