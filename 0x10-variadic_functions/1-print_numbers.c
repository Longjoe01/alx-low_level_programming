#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - function that prints numbers, followed by a new line.
* @separator: separates the numbers
* @n: number of args
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list name;
	unsigned int i;

	va_start(name, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(name, int));
	if ((i != (n - 1)) && separator != NULL)
	printf("%s", separator);
	}
}
