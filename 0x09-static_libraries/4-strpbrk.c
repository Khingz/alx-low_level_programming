/**
 * _strpbrk - Entry point
 *
 * @s: string to be checked
 * @accept: substr
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i] >= '\0')
	{
		j = 0;
		if (s[i] == '\0')
		{
			return (0);
		}
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
