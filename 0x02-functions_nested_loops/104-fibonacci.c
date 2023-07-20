#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	float first = 1.0, second = 2.0, store;
	int count = 3;

	printf("%.0f, ", first);
	printf("%.0f, ", second);

	while (count <= 98)
	{
		store = second;
		second = second + first;
		first = store;
		if (count < 98)
		{
			printf("%.0f, ", second);
		} else
		{
			printf("%.0f", second);
		}
		count++;
	}
	printf("\n");
	return (0);
}
