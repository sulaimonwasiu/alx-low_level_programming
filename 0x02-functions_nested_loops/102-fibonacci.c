#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	int first = 1, second = 2, count = 2, store;

	printf("%d, ", first);
	printf("%d, ", second);

	while (count <= 50)
	{
		store = second;
		second = second + first;
		first = store;
		printf("%d, ", second);
		count++;
	}
	return (0);
}
