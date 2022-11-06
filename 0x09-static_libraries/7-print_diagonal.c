#include "main.h"

/**
* print_diagonal - a function that draws diagonal line on the terminal
* @n: an integer
* Return: Always 0
*/

void print_diagonal(int n)
{
	int a = 0, j;

	if (n > 0)
	{
	for (; a < n; a++)
	{
	for (j = 0; j < a; j++)
	_putchar(' ');
	_putchar(92);
	_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
