/**
 * cap_string - Entry point
 *
 * @str: string to cap
 *
 * Return: Always char (Success)
 */
char *cap_string(char *str)
{
	char *tmp;
	int i;
	char *sep = "\n\t .,(){}!?;";

	tmp = str;
	while (*tmp)
	{
		if (*tmp == *str && *tmp >= 97 && *tmp <= 122)
		{
			*tmp -= 32;
		}
		i = 0;
		while (i < 13)
		{
			if (*tmp == sep[i] && *(tmp + 1) >= 97 && *(tmp + 1) <= 122)
			{
				*(tmp + 1) -= 32;
				break;
			}
			i++;
		}
		tmp++;
	}
	return (str);
}
