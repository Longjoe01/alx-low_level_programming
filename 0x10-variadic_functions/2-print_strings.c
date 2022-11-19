#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings folowed by anewline
 * @separator: separates the strings
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
		s = va_arg(name, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(name);
}
