#include "main.h"

/**
 * main - Entry point
 *
 * Description - prints all alphabet in lowercase
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}
	_putchar('\n');
	return (0);
}
