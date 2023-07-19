#include "main.h"

/**
 * print_100th - prints the 100th digit
 * @c: an integer number
 * Return 0: success
 */

void print_100th(int c)
{
	_putchar(' ');
	_putchar(c / 100 + '0');
	_putchar((c - (c / 100) * 100) / 10 + '0');
	_putchar((c - (c / 100) * 100) % 10 + '0');
}
