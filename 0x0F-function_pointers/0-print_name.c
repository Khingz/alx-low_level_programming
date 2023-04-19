
/**
 * print_name - Print a string
 * @name: name to print
 * @f: call back function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
