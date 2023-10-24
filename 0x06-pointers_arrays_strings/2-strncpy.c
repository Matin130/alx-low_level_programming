#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: destination parameter passed
 * @src: source parameter passed
 * @n: max no. of characters to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
