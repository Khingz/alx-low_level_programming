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

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			i = 0;
			tmp = haystack;
			for (; needle[i] >= '\0'; i++)
			{
				if (needle[i] != *tmp)
				{
					break;
				}
				if (needle[i] == '\0')
				{
					return (haystack);
				}
				tmp++;
			}
		}
		haystack++;
	}
	return (0);
}
