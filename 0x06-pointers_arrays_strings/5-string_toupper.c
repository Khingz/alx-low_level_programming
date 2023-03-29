/**
 * string_toupper - Entry point
 *
 * @a: char string
 *
 * Return: Always char
 */
char *string_toupper(char *a)
{
	while (*a)
	{
		if ((*a >= 97) && (*a <= 122))
		{
			*a -= 32;
		}
		a++;
	}
	return (a);
}
