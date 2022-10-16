#include <stdio.h>

/**
 * main - print alphabets in lowercase except q and e
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	if ((ch != 'q') && (ch != 'e'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
}
