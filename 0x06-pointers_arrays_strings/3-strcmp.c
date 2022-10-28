#include "main.h"

/**
* _strcmp - function that compares two strings
* @s1: first input parameter
* @s2: second input parameter
* Return: value
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int value = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			value = 1;
			break;
		}
	}
}
