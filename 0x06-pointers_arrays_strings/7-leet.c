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
	int i;
	char *letters = "aAeEoOtTlL";
	char *code = "4433007711";

	tmp = str;
	while (*tmp)
	{
		i = 0;
		while (i < 10)
		{
			if (*tmp == letters[i])
			{
				*tmp = code[i];
			}
			i++;
		}
		tmp++;
	}
	return (str);
}
