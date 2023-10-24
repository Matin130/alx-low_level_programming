#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: detination parameter used
 * @src: source parameter used
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len, len1;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	for (len1 = 0; src[len1] != '\0'; len1++)
	{
		dest[len + len1] = src[len1];
	}
	dest[len + len1] = '\0';
	return (dest);
}
