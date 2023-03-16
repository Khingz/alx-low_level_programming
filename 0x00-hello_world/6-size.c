#include <stdio.h>

/** 
 *main - Entry point
 *
 * description: print size of var
 *
 * return: Always (0) success
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char is: %i byte(s)\n", (int) sizeof(a));
	printf("Size of int is: %i byte(s)\n", (int) sizeof(b));
	printf("Size of long int is: %i byte(s)\n", (int) sizeof(c));
	printf("Size of long long int is: %i byte(s)\n", (int) sizeof(d));
	printf("Size of float is: %i byte(s)\n", (int) sizeof(f));

	return (0);
}
