#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
