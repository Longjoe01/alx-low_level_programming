#include "main.h"

/**
* _memset - function that fills memory with a constant byte
* @s: starting address of memory to be filed
* @b: value to be filled
* @n: number of bytes to be filled
* Return: *s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsighed int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
