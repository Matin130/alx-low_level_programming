#include "main.h"

/**
 * _strcmp -  compares two strings.
 * @s1: parameter used
 * @s2: parameter used
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, f;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			f = 0;
		}
		else if (s1[i] < s2[i])
			f = -1;
		else
			f = 1;
	}
	return (f);
}
