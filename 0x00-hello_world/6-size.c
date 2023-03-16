#include <stdio.h>

/** 
 * main - Entry point
 *
 * description: print size of var
 *
 * Return Always 0 (Success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %i byte(s)\n", (int) sizeof(a));
	printf("Size of an int: %i byte(s)\n", (int) sizeof(b));
	printf("Size of a long int: %i byte(s)\n", (int) sizeof(c));
	printf("Size of a long long int: %i byte(s)\n", (int) sizeof(d));
	printf("Size of a float: %i byte(s)\n", (int) sizeof(f));

	return (0);
}
