#include "main.h"

/**
 * _strlen - Entry point
 *
 * @s: string to be checked
 *
 * Return: Always int (Success)
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
