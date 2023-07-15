#include <stdio.h>

/**
 * main - prints combination of digits
 *
 * Return: 0
 */

int main(void)
{
	int n, m, l;

	for (n = 0; n <= 9; n++)
	{
		for (m = 1; m <= 9; m++)
		{
			for (l = 2; l <= 9; l++)
			{
				if (l > m && m > n)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(l + '0');
					if (n != 7 || m != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
