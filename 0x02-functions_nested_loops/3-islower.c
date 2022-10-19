#include "main.h"

/**
 * _islower -  check for lowercase character
 *
 *@c : An ASCII character
 *
 * Return: 1 if lowercase
 * Else return 0
 */
int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
