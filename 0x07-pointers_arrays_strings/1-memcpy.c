#include "main.h"

/**
 * _memcpy -  copies memory area.
 * @dest: detsion passed
 * @src: source passed
 * @n: no. of bytes to copy from src to dest
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
