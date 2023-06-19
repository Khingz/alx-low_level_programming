/**
 * _memset - Entry point
 *
 * @s: starting address
 * @b: char to replace
 * @n: buffer length
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *tmp;

	tmp = s;
	i = 0;
	while (i < n)
	{
		*tmp = b;
		i++;
		tmp++;
	}

	return (s);
}
