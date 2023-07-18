#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Retun: Always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
