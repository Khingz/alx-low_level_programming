/**
 * _strchr - Entry point
 *
 * @s: string to be searched
 * @c: character to be searched
 * Return: Pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (0);
}
