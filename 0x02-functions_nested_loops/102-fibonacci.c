#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	long int first = 1, second = 2, store;
	int count = 3;

	printf("%ld, ", first);
	printf("%ld, ", second);

	while (count <= 50)
	{
		store = second;
		second = second + first;
		first = store;
		printf("%ld, ", second);
		count++;
	}
	return (0);
}
