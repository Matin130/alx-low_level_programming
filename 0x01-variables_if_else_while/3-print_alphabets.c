#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;
	char caps;

	for (caps = 'a'; caps <= 'z'; caps++)	
		putchar(caps);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
