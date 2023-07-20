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

	printf("%.0Lf, ", first);
	printf("%.0Lf, ", second);

	while (count <= 98)
	{
		store = second;
		second = second + first;
		first = store;
		if (count < 98)
		{
			printf("%.0Lf, ", second);
		} else
		{
			printf("%.0Lf", second);
		}
		count++;
	}
	printf("\n");
	return (0);
}
