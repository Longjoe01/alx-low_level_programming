#include "main.h"

/**
* print_line - a function that prints line in the terminal
* follow by a newline
* @n: an integer
*Return: 0
*/
void print_line(int n)
{
	int l = 0;

	if (n > 0)
	{
	for (; l < n; l++)
	_putchar('_');
	}
	_putchar('\n');
}
