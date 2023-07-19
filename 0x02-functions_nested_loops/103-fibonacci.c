#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	long int first = 1, second = 2, store, sum;

	sum = second;
	while (second <= 4000000)
	{
		store = second;
		second = second + first;
		first = store;
		if (second % 2 == 0)
		{
			sum += second;
		}
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
