#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: parameter passed
 * Return: 0
 */

void puts_half(char *str)
{
	int i, j, n, len;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	len = i;
	for (j = len / 2; str[j] != '\0'; j++)
	{
		n = (len - 1) / 2;
		if (len % 2 != 0)
		{
			_putchar(str[n]);
		}
		else
			_putchar(str[j]);
	}
	_putchar('\n');
}
