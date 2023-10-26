#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array passed
 * @n: no. of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, l;

	for (i = 0; i <= n / 2; i++)
	{
		l = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = l;
	}
}
