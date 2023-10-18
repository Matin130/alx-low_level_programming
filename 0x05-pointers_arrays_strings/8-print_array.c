#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: pointer passed
 * @n:  number of elements of the array to be printed
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i, len;

	for (i = 0; a[i] != '\0'; i++)
	{
	}
	len = i;
	for (n = 0; *(a + n) != '\0'; n++)
	{
		printf("%d", *(a + n));
		if (n < len - 1)
			printf(", ");
	}
	printf("\n");
}
