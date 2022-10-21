#include "main.h"

/**
* print_most_numbers - prints number from 0 to 9
* except 2 and 4
*
*Return: 0
*/

void print_most_numbers(void)
{
	for ((n = '0'; n <= '9'; n++) && (n != '2'; n != '4'))
	{
		_putchar(n);
	}
	_putchar('\n');
}
