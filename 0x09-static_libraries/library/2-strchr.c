#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: pointer passed
 * @c: character to be located
 * Return: null if character is not found or s if character
 * is found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
