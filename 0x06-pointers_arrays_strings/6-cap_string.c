#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string passed
 * Return: s
 */

char *cap_string(char *s)
{
	int arr_index;

	for (arr_index = 0; s[arr_index] != '\0'; arr_index++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;

		if (s[arr_index] == ' ' || s[arr_index] == '\t'
			|| s[arr_index] == '\n' || s[arr_index] == ','
			|| s[arr_index] == ';' || s[arr_index] == '.'
			|| s[arr_index] == '!' || s[arr_index] == '?'
			|| s[arr_index] == '"' || s[arr_index] == '('
			|| s[arr_index] == ')' || s[arr_index] == '{'
			|| s[arr_index] == '}')
		{
			if (s[arr_index + 1] >= 97 && s[arr_index + 1] <= 122)
				s[arr_index + 1] = s[arr_index + 1] - 32;
		}
	}
	return (s);
}
