#include <stdio.h>

/**
 * main - prints all integers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%i", n);
			n++;
	}
	putchar('\n');

	return (0);
}
