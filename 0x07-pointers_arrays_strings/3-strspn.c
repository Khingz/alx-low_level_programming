/**
 * _strspn - Entry point
 *
 * @s: string to search
 * @accept: substr
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	int i;

	len = 0;
	while (*s)
	{
		i = 0;
		while (accept[i] >= '\0')
		{
			if (*s == accept[i])
			{
				len += 1;
				break;
			}
			if (accept[i] == '\0')
			{
				return (len);
			}
			i++;
		}
		s++;
	}
	return (len);
}
