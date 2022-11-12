#include "main.h"
#include <stdlib.h>
/**
* create_array - function that creates an array of char
* @size: size of char
* @c: pointer
* Return: NULL or 0
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
