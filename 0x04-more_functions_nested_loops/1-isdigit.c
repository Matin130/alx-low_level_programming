#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: parameter to be compared
 * Return: 1 on success 0 on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
