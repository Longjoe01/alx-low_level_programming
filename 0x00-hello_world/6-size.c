#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints the size of various types
 * base on the computer it's printed on
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char: %ld byte(s)\n", sizeof(char));
	printf("size of an int: %ld bytes(s)\n", sizeof(int));
	printf("size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
