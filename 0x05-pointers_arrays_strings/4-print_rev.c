#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: parameter passed
 * Return: nothing
 */

int _strlen(char *s);
void print_rev(char *s)
{
	int a, length, i;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	length = a;
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
