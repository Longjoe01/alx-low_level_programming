#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: number of parameters
* Return: 0, if n == 0 else sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list name;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
	return (0);
	}
	va_start(name, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(name, int);
	}
	va_end(name);
	return (sum);
}
