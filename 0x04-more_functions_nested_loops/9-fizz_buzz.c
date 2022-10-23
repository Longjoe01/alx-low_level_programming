#include <stdio.h>

/**
* main - Entry point
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		printf("fizzBuzz ");
		else if (i % 3 == 0)
		printf("fizz ");
		else if (i % 5 == 0)
		printf("Buzz");
		else
		printf("%d\n");
	}
	return (0);
}
