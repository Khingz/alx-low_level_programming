/**
 * leet - Entry point
 *
 * @str: string to cap
 *
 * Return: Always char (Success)
 */
char *leet(char *str)
{
	char *tmp;

	tmp = str;
	while (*tmp)
	{
		if (*tmp == 65 || *tmp == 97)
		{
			*tmp = 52;
		}
		if (*tmp == 69 || *tmp == 101)
		{
			*tmp = 51;
		}
		if (*tmp == 79 || *tmp == 111)
		{
			*tmp = 48;
		}
		if (*tmp == 84 || *tmp == 116)
		{
			*tmp = 55;
		}
		if (*tmp == 76 || *tmp == 108)
		{
			*tmp = 49;
		}
		tmp++;
	}
	return (str);
}
