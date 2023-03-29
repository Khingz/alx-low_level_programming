/**
 * _strcmp - Entry point
 *
 * @s1: string concat destination
 * @s2:  source
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int check;
	int i;

	check = i = 0;
	while (*s2 != '\0')
	{
		if (s1[i] - *s2 == 0)
		{
			s2++;
			i++;
		}
		else
		{
			check = (s1[i] - s2[i]);
			return (check);
		}
	}
	return (0);
}
