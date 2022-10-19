#include "main.h"

/**
 * main - Entry point
 *
 * Description - prints all alphabet in lowercase
 *
 *Return: void
 */
void print_alphabet(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}
	_putchar('\n');
}
