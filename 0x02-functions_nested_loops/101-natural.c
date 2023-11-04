#include <stdio.h>
/**
 * main - program to print sum of multiples of 5 & 3
 * Return: 0

int main(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j = j + i;
	}
	printf("%d\n", j);
		return (0);
}
