#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 * Print all the letters except q and e
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
			continue;
		else
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
