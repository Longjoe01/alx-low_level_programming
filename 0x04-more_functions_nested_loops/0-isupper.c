#include "main.h"

/**
 * _isupper - check for lowercase character
 * @c: uppercase character
 * Return: 0 if lowercase, else 1
 */
int _isupper(int c)
{
	char c;

	if (c > 65 && c < 91)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (0);
}

