#include <stddef.h>
#include "main.h"

/**
 * puts2 - Entry point
 *
 * @str: string to print
 *
 * Return: Always void (Success)
 */
void puts2(char *str)
{

	for (; *str != '\0'; str += 2)
	{
		if (str != NULL)
		{
			_putchar(*str);
		}
	}
	_putchar('\n');
}
