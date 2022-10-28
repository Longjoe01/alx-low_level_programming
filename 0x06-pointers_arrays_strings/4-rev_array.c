#include "main.h"

/**
* reverse_array - function that reverse the content of an array
* @a: an array
* @n: number of elements in the array
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
