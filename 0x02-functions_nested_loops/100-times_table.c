#include "main.h"

/**
 * print_times_table - Times table display
 * @n: the number
 * Return 0: success
 */

void print_times_table(int n)
{
	int a, b, c;

	if ((n > 15) || (n < 0))
	{
		;
	}
	else
	{
		for (b = 0; b <= n; b++)
		{
			for (a = 0; a <= n; a++)
			{
				c = a * b;
				if (a == 0)
					_putchar(c + '0');
				else if (c >= 100)
					print_100th(c);
				else if ((c >= 10) && (c < 100))
					print_10th(c);
				else
					print_unit(c);
				if (a != n)
					_putchar(',');

			}
			_putchar('\n');
		}
	}
}
