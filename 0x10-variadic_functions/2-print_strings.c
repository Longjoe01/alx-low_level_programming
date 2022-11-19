#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings -  function that prints strings, followed by a new line.
* @separator: separates the string
* @n: number of args
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list name;
	unsigned int i;
	char *s;

	va_start(name, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(name, *char);
		if (s == NULL)
		{
			printf("nill");
		}
		else
		{
			printf("%s", s);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(name);

}
