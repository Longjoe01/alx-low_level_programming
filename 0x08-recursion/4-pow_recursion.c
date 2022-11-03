#include "main.h"
/**
* _pow_recursion - raise the power of an integer
* @x: an integer
* @y: an integer
* Return: recursion
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (_pow_recursion(x, y - 1) * x);
	}
}
