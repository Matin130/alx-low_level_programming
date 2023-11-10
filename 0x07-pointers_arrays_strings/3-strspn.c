#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to string to be analyzed
 * @accept: pointer to set of characters to match
 * Return:  the number of bytes in the initial segment of s
 *  which consist only of bytes from accept1
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count = count + 1;
				k = 1;
			}
		}

		if (k == 0)
			return (count);
	}
	return (count);
}
