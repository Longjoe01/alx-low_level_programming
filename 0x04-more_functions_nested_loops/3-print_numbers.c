#include "main.h"

/**
* print_numbers - print numbers from 0 to 9
*
* Return: 0
*/
void print_numbers(void)
{
	int num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
