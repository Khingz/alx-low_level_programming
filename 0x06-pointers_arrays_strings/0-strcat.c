/**
 * _strcat - Entry point
 *
 * @dest: string concat destination
 * @src: concat source
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*tmp)
	{
		*tmp++;
	}

	while (*src)
	{
		*tmp = *src;
		*tmp++;
		*src++;
	}
	*tmp = '\0';
	return (dest);
}
