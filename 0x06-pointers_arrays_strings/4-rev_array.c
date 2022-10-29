#include "main.h"

/**
* reverse_array - function that reverse an array of integers
* @a: pointer to an array
* @n: num of element of an array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int c;

	for (i = 0; j = n - 1; i < j; i++; j--)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
	}
}
