#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * with a required amount of bytes to be appended
 * @dest: destination parameter passed
 * @src: source paramete passed
 * @n: required no. of bytes parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
