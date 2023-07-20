#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	long double first = 1, second = 2, store;
	int count = 3;

	printf("%Lf, ", first);
	printf("%Lf, ", second);

	while (count <= 98)
	{
		store = second;
		second = second + first;
		first = store;
		if (count < 98)
		{
			printf("%Lf, ", second);
		} else
		{
			printf("%Lf", second);
		}
		count++;
	}
	printf("\n");
	return (0);
}
