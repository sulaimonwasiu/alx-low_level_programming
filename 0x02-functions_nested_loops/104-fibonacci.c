#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int first = 1, second = 2, store;
	int count = 3;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (count <= 98)
	{
		store = second;
		second = second + first;
		first = store;
		if (count < 98)
		{
			printf("%lu, ", second);
		} else
		{
			printf("%lu", second);
		}
		count++;
	}
	printf("\n");
	return (0);
}
