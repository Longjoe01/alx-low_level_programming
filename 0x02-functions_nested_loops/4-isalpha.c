#include "main.h"

/**
 * _isalpha - check for alphabet
 *
 * @c: is a ASCII character
 *
 * Return: 1 if c is an alphabet, lower or upper
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

