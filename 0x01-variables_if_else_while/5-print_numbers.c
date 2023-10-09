#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base
 * 10 starting from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
