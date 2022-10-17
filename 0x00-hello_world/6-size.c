#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - prints the size of various types
 * base on the computer it's printed on
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));

	return (0);
}
