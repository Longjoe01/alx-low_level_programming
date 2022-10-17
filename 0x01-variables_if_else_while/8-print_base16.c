#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 * in lowercase follwed by newline
 *
 * Return 0 (Success)
 */

int main(void)
{
	int n = 48;
	char alpha = 'a';

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
