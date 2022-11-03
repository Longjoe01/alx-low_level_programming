#include "main.h"

/**
* _puts_recursion - function that prints a string follow by newline.
* @s: pointer to string
* Return: void
*/

void _puts_recursion(char *s)
{
	for (*s != '\0')
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
