/**
 * rot13 - Entry point
 *
 * @str: string to cap
 *
 * Return: Always char (Success)
 */
char *rot13(char *str)
{
	char *tmp;
	int i;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	tmp = str;
	while (*tmp)
	{
		i = 0;
		while (i < 52)
		{
			if (*tmp == letters[i])
			{
				*tmp = code[i];
				break;
			}
			i++;
		}
		tmp++;
	}
	return (str);
}
