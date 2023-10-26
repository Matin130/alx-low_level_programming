#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: parameter checked
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int d;

	if (n < 0)
		n = -n;
	d = n % 10;

	if (d < 0)
		d = -d;
	_putchar(d + '0');
	return (d);
}
