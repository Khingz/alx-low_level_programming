/**
 * _memcpy - Entry point
 *
 * @dest: cpy destination
 * @src: copy source
 * @n: buffer size
 * Return: Always source pointer (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp;
	unsigned int i;

	i = 0;
	tmp = dest;
	while (i < n)
	{
		*tmp = *src;
		tmp++;
		src++;
		i++;
	}
	return (dest);
}
