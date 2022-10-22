#include "main.h"

/**
* more_numbers - prints 10 times the number from 0 to 14
* follow by a newline.
*Return: 0
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 1; j < 15; j++)
	{
	if (j >= 10)
	_putchar((j / 10) + 48);
	_putchar((j % 10) + 48);
	}
	_putchar('\n');
	}
}
