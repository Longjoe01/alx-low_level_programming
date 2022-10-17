#include <stdio.h>

/**
 * main - Entry point
 *
 *Description - prints all numbers of base 16, followed
 * by newline
 *
 * Return: Always 0 (Success)
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
