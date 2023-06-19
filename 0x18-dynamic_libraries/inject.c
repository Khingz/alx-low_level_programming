#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int printf(const char *format, ...)
{
        return (1);
}


int puts(const char *format)
{
	char *str = "Congratulations, you win the Jackpot!\n";
	char *num = "9 8 10 24 75 - 9\n";
	write(1, num, strlen(num));
	write(1, str, strlen(str));
	return(1);
}
