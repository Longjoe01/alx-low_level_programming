#include "main.h"

/**
* *_strcat - concatenates two strings
* @dest: destination string
* @src: source string
* Return: the value of dest
*/

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;

	while (dest[len])
		len++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[len + 1] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
