#include <stdio.h>

/**
 * main -  prints the sum of the even-valued terms in a fibonacci sequence
 * whose value doesn't exceed 4,000,000.
 * Return: 0
 */

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int sum;
	int limit = 4000000;
	int even = 2;

	for (; sum <= limit;)
	{
		sum = num1 + num2;
		if (sum % 2 == 0)
			even = even + sum;
		num1 = num2;
		num2 = sum;
	}
	printf("%d\n", even);
	return (0);
}
