#include <stdio.h>

int isPalindrome(int num);

int main(void)
{
	int num, i, j, product;

	num = 0;
	i = j = 999;
	while (i > 0)
	{
		while (j > 0)
		{
			product = i * j;
			if (product > num && isPalindrome(product))
			{
				num = product;
			}
			j--;
		}
		i--;
	}
	printf("%d", num);
}

int isPalindrome(int num) {
    int reversed, original, remainder;

    reversed = 0;
    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        return 1;  // It's a palindrome
    else
        return 0;  // It's not a palindrome
}
