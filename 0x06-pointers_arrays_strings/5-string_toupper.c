/**
 * string_toupper - Entry point
 *
 * @a: char string
 *
 * Return: Always char
 */
char *string_toupper(char *a)
{
	char *tmp;

	tmp = a;
	while (*tmp)
	{
		if ((*tmp >= 97) && (*tmp <= 122))
		{
			*tmp -= 32;
		}
		tmp++;
	}
	return (a);
}
