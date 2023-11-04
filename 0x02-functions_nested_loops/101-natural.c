#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j = j + i;
	}
	printf("%d\n", j);
}
