#include "main.h"

/**
 * _isupper - check for lowercase character
 * @c: uppercase character
 * Return: 0 if lowercase, else 1
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

