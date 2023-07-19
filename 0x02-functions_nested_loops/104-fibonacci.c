#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned int first = 1, second = 2, store;
	int count = 3;

	printf("%u, ", first);
	printf("%u, ", second);

	while (count <= 50)
	{
		store = second;
		second = second + first;
		first = store;
		if (count < 98)
		{
			printf("%u, ", second);
		} else
		{
			printf("%u", second);
		}
		count++;
	}
	printf("\n");
	return (0);
}
