#include <ctype.h>

/**
 * _islower - Entry point
 *
 *@c: int c
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
