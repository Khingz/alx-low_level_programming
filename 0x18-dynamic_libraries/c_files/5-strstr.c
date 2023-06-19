/**
 * _strstr - Entry point
 *
 * @haystack: string
 * @needle: substr
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *tmp;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			i = 0;
			tmp = haystack;
			while (needle[i] >= '\0')
			{
				if (needle[i] == *tmp)
				{
					i++;
					tmp++;
				}
				else if (needle[i] == '\0')
				{
					return (tmp);
				}
				else
				{
					break;
				}
			}
		}
		haystack++;
	}
	return (0);
}
