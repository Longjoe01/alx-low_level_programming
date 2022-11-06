#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description -  prints 10 times the alphabet, in
 * lowercase, followed by a new line.
 *
 * R:wq
 * eturn: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int line = 0;
	char alpha = 'a';

	while (line < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		line++;
	}
}


