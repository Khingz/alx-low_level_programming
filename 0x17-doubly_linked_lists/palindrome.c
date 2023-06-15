#include <stdio.h>

int isPalindrome(int num);

int main(void)
{
	int num, i, j, product;

	num = 0;
	for (i = 999; i >= 100; i--) {
		for (j = 999; j >= 100; j--) {
			product = i * j;
			if (product > num && isPalindrome(product)) {
				num = product;
			}
		}
	}
	printf("%d", num);
	return (0);
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
