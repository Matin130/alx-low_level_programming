#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: main no.
 * @y: no. to be raised to power
 * Return: -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y >= 0)
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
	else
		return (-1);
}
