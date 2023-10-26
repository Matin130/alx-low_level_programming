#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @i: parameter checked
 * Return: 0
 */

int _abs(int i)
{
	int absval;

	if (i < 0)
		absval = -i;
	else
		absval = i;
	return (absval);
}
