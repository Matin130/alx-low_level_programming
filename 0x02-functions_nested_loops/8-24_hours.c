#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: 0
 */

void jack_bauer(void)
{
	int i;
	for (i = 0; i <= 23; i++)
	{
		int j;

		for (j = 0; j <= 59; j++)
		{
			_putchar(i);
			_putchar(':');
			_putchar(j);
			_putchar('\n');
		}
	}
}
