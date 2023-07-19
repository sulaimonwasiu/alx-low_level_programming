#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	long long int first = 1, second = 2, store;
	int count = 1;

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
