/**
 * _strncat - Entry point
 *
 * @dest: string concat destination
 * @src: concat source
 * @n: numberof source bytes
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;
	int i;

	while (*tmp)
	{
		tmp++;
	}

	i = 0;
	while (*src && i < n)
	{
		*tmp = *src;
		tmp++;
		src++;
		i++;
	}
	*tmp = '\0';
	return (dest);
}
