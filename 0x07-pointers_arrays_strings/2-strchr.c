#include "main.h"

/**
* _strchr - function that locates a char in a string
* @s: pointer to a string
* @c: char to be found
* Return: *s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		s++;
		return (s);
	}
	return (0);
}
