#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints alphabets in small letters, executes and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
