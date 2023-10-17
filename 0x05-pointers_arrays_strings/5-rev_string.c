#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: parameter passed
 * Return: 0
 */

void rev_string(char *s)
{
	char temp;
	int length, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	length = i;
	for (j = 0; j < length / 2; j++)
	{
		temp = s[j];
		s[j] = s[length - j - 1];
		s[length - j - 1] = temp;
	}
}
