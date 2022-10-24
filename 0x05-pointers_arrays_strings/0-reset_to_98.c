#include "main.h"

/**
* reset_to_98 - takes a pointer to an int as parameter
* and updates the value it point to to 98
* @n: an integer
* @ptr: integer pointer
*Return: Always 0
*/

void reset_to_98(int *n)
{
	int n;
	int *ptr;
	ptr = &n;
	*ptr = 98;
}
