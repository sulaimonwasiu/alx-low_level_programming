#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	long int first = 1.0, second = 2.0, store;
	int count = 3;

	printf("%ld, ", first);
	printf("%ld, ", second);

	while (count <= 98)
	{
		store = second;
		second = second + first;
		first = store;
		if (count < 98)
		{
			printf("%ld, ", second);
		} else
		{
			printf("%ld", second);
		}
		count++;
	}
	printf("\n");
	return (0);
}
