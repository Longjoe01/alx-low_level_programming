#include "main.h"

/**
 * print_last_digit - Prints last digits
 *
 * @n: is an integer
 *
 * Return: returns an integer
 */
int print_last_digit(int n)
{
	int digit = n % 10;

	_putchar(digit + '0');
	_putchar('\n');
	return (0);
}

