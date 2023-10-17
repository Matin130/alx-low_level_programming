#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: parameter passed
 * Return: 0
 */

void rev_string(char *s)
{
	int length, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	length = i;
	for (j = 0; s[j] != '\0'; j++)
	{
		s[j] = s[length - 1];
		length--;
	}
}
